#ifndef OBJECTMESH_H
#define OBJECTMESH_H
using namespace std;
#include <stdexcept>
#include <vector>
#include "Object3D.hpp"


struct Polygone{

    Polygone(int a_, int b_, int c_);

    int a;
    int b;
    int c;
};


struct Mesh{
    Mesh();
    Mesh(vector<Position> points_, vector<Polygone> polygones_);
    
    vector<Position> points;
    vector<Polygone> polygones;
};


class ObjectMesh: public Object3D{
    public:

        //constructors
        ObjectMesh();
        ObjectMesh(Mesh mesh_);
        ObjectMesh(Position position_, Mesh mesh_);

        //setters and getters
        void set_mesh(Mesh mesh_);
        Mesh get_mesh();

    private:

        Mesh mesh;
};


#endif