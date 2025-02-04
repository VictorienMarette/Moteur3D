#ifndef THREEDOBJECTS_H
#define THREEDOBJECTS_H
#include "Matrix.hpp"
#include "PositionQuaternion.hpp"
#include <sstream> 
#include <iostream>
#include <SDL.h>

using namespace std;


class Object3D{
    public:

        //constructors
        Object3D();
        Object3D(Position position_);

        //setters and getters
        void set_position(Position position_);
        void rotate_axis_x(double angle);
        void rotate_axis_y(double angle);
        void rotate_axis_z(double angle);
        Position get_position() const;
        Quaternion get_quaternion() const;

        Matrix4x4 object_space_matrix();

        //will be executed every frame
        virtual void main();
        virtual void event_handeler(SDL_Event event);

    private:

        Position position;
        Quaternion quaternion;

};

#endif