#include "ObjectMesh.hpp"


Polygone::Polygone(int a_, int b_, int c_){
    a = a_;
    b = b_;
    c = c_;
}


Mesh::Mesh(){
    points = {};
    polygones = {};
}

Mesh::Mesh(vector<Position> points_, vector<Polygone> polygones_){
    points = points_;
    for (int i = 0; i++; i < polygones_.size()){
        if(polygones_[i].a >= points_.size() or polygones_[i].b >= points_.size() or polygones_[i].c >= points_.size()){
            throw invalid_argument("Polygone point index out of bound");
        }
        if(polygones_[i].a == polygones_[i].b or polygones_[i].a == polygones_[i].c or polygones_[i].b == polygones_[i].c){
            throw invalid_argument("Two polygone point index are the same");
        }
    }
    polygones = polygones_;
}


ObjectMesh::ObjectMesh() : Object3D(){
    mesh = Mesh();
}

ObjectMesh::ObjectMesh(Mesh mesh_) : Object3D(){
    mesh = mesh_;
}

ObjectMesh::ObjectMesh(Position position_, Mesh mesh_) 
: Object3D(position_){
    mesh = mesh_;
}

void ObjectMesh::set_mesh(Mesh mesh_){
    mesh = mesh_;
}

Mesh ObjectMesh::get_mesh(){
    return mesh;
}