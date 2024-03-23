#include "Object3D.hpp"

Object3D::Object3D(){
    position = Position(0.,0.,0.);
    quaternion = Quaternion(1.,0.,0.,0.);
}

Object3D::Object3D(Position position_){
    position = position_;
    quaternion = Quaternion();
}

void Object3D::set_position(Position position_){
    position = position_;
}

void Object3D::rotate_axis_x(double angle){
    quaternion = quaternion*rotation_to_quaternion(angle, 1, 0, 0);
}

void Object3D::rotate_axis_y(double angle){
    quaternion = quaternion*rotation_to_quaternion(angle, 0, 1, 0);
}

void Object3D::rotate_axis_z(double angle){
    quaternion = quaternion*rotation_to_quaternion(angle, 0, 0, 1);
}

Position Object3D::get_position() const{
    return position;
}

Quaternion Object3D::get_quaternion() const{
    return quaternion;
}

Matrix4x4 Object3D::object_space_matrix(){
    return position_to_translation_matrix(position)*quaternion_to_matrix(quaternion);
}

void Object3D::main(){};

void Object3D::event_handeler(SDL_Event event){};