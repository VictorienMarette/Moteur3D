#include "Camera.hpp"


Camera::Camera(double alpha_, double beta_, double near_, double far_, double screen_s_x_, double screen_s_y_): Object3D(){
    alpha = alpha_; beta = beta_; near = near_; far = far_; screen_s_x = screen_s_x_; screen_s_y = screen_s_y_;
}

Camera::Camera(double alpha_, double beta_, double near_, double far_, double screen_s_x_, double screen_s_y_, 
Position position_): Object3D(position_){
    alpha = alpha_; beta = beta_; near = near_; far = far_; screen_s_x = screen_s_x_; screen_s_y = screen_s_y_;
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

Position2 Camera::adjuste_position_on_screen(Position2 pos){
    //return Position2(pos.x*screen_s_x + screen_s_x/2, pos.y*screen_s_y + screen_s_y/2);
    return Position2(pos.x*screen_s_x/10 + screen_s_x/20, pos.y*screen_s_y/10 + screen_s_y/20);
}

void Camera::render(vector<ObjectMesh *> *objects, SDL_Renderer *renderer){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    Matrix4x4 to_cam_s = get_camera_tranforme_matrix()*get_camera_space_matrix();

    Matrix4x4 obj_s_to_cam_s = Matrix4x4();
    for (int i = 0; i < (*objects).size(); i++){
        obj_s_to_cam_s = to_cam_s*(*objects)[i]->object_space_matrix();
        for (int j = 0; j < (*objects)[i]->get_mesh().polygones.size(); j++){
            int ia = (*objects)[i]->get_mesh().polygones[j].a;
            int ib = (*objects)[i]->get_mesh().polygones[j].b;
            int ic = (*objects)[i]->get_mesh().polygones[j].c;

            Vector4 pa = obj_s_to_cam_s*position_to_vector4((*objects)[i]->get_mesh().points[ia]);
            Vector4 pb = obj_s_to_cam_s*position_to_vector4((*objects)[i]->get_mesh().points[ib]);
            Vector4 pc = obj_s_to_cam_s*position_to_vector4((*objects)[i]->get_mesh().points[ic]);

            Position2 cor_a = adjuste_position_on_screen(vector4_to_position2(pa));
            Position2 cor_b = adjuste_position_on_screen(vector4_to_position2(pb));
            Position2 cor_c = adjuste_position_on_screen(vector4_to_position2(pc));
            
            SDL_RenderDrawLine(renderer, cor_a.x, cor_a.y, cor_b.x, cor_b.y);
            SDL_RenderDrawLine(renderer, cor_a.x, cor_a.y, cor_c.x, cor_c.y);
            SDL_RenderDrawLine(renderer, cor_c.x, cor_c.y, cor_b.x, cor_b.y);
        }
    }
}