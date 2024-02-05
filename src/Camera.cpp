#include "Camera.hpp"


Camera::Camera(double alpha_, double beta_, double near_, double far_): Object3D(){
    double alpha = alpha_; double beta = beta_; double near = near_; double far = far_;
}

Camera::Camera(double alpha_, double beta_, double near_, double far_, Position position_): Object3D(position_){
    double alpha = alpha_; double beta = beta_; double near = near_; double far = far_;
}

Matrix4x4 Camera::get_camera_space_matrix(){
    Matrix4x4 trans_to_cam_s = position_to_translation_matrix(
        Position(-get_position().x, -get_position().y, -get_position().z));
    Matrix4x4 rot_to_cam_s = quaternion_to_matrix(rotation_to_quaternion(atan(1)*4, 1, 0, 0)*get_quaternion().inverse());
    return rot_to_cam_s*trans_to_cam_s;
}

Matrix4x4 Camera::get_camera_tranforme_matrix(){
    Matrix4x4 result = Matrix4x4();
    result.a00 = cos(alpha)/sin(alpha);
    result.a11 = cos(beta)/sin(beta);
    result.a22 = (far+near)/(far-near);
    result.a32 = (2*far*near)/(far-near);
    result.a23 = -1.;
    return result;
}

void Camera::render(vector<ObjectMesh> *objects, SDL_Renderer *renderer){
    
    Matrix4x4 to_cam_s = get_camera_tranforme_matrix()*get_camera_space_matrix();

    Matrix4x4 obj_s_to_cam_s = Matrix4x4();
    for (int i = 0; i < (*objects).size(); i++){
        obj_s_to_cam_s = to_cam_s*(*objects)[i].object_space_matrix();
        for (int j = 0; j < (*objects)[i].get_mesh().polygones.size(); j++){
            int ia = (*objects)[i].get_mesh().polygones[i].a;
            int ib = (*objects)[i].get_mesh().polygones[i].b;
            int ic = (*objects)[i].get_mesh().polygones[i].c;

            Vector4 pa = obj_s_to_cam_s*position_to_vector4((*objects)[i].get_mesh().points[ia]);
            Vector4 pb = obj_s_to_cam_s*position_to_vector4((*objects)[i].get_mesh().points[ib]);
            Vector4 pc = obj_s_to_cam_s*position_to_vector4((*objects)[i].get_mesh().points[ic]);

            Position2 cor_a = vector4_to_position2(pa);
            Position2 cor_b = vector4_to_position2(pb);
            Position2 cor_c = vector4_to_position2(pc);
        }
    }
}