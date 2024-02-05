#ifndef CAMERA_H
#define CAMERA_H
#include <cmath> 
#include "Object3D.hpp"
#include "ObjectMesh.hpp"
#include "PositionQuaternion.hpp"
#include <SDL.h>


class Camera: public Object3D{
    
    public:
        //constructors
        Camera(double alpha_, double beta_, double near_, double far_);
        Camera(double alpha_, double beta_, double near_, double far_, Position position_);

        Matrix4x4 get_camera_space_matrix();
        Matrix4x4 get_camera_tranforme_matrix();
        void render(vector<ObjectMesh> *objects, SDL_Renderer *renderer);

    private:
        double alpha;
        double beta;
        double near;
        double far;
};



#endif