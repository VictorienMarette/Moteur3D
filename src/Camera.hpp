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
        Camera(double alpha_, double beta_, double near_, double far_, double screen_s_x_, double screen_s_y_);
        Camera(double alpha_, double beta_, double near_, double far_, double screen_s_x_, double screen_s_y_,
        Position position_);

        Matrix4x4 get_camera_space_matrix();
        Matrix4x4 get_camera_tranforme_matrix();
        Position2 adjuste_position_on_screen(Position2 pos);
        void render(vector<ObjectMesh *> *objects, SDL_Renderer *renderer);

    private:
        double screen_s_x;
        double screen_s_y;
        double alpha;
        double beta;
        double near;
        double far;
};



#endif