#ifndef MOTEUR_H
#define MOTEUR_H
#include "Object3D.hpp"
#include "ObjectMesh.hpp"
#include "PositionQuaternion.hpp"
#include "Camera.hpp"
#include <vector>
#include <SDL.h>


class Moteur3D{
    
    public:
        //constructors
        Moteur3D(Camera *camera_, vector<Object3D> *objs_to_run_, vector<ObjectMesh> *objs_to_render_, int height_, int width_);

        void run_one_cycle();

    private:
        Camera *camera;
        vector<Object3D> *objs_to_run;
        vector<ObjectMesh> *objs_to_render;
        int height;     // Height of the window
        int width;      // Width of the window
        SDL_Renderer *renderer = NULL;      // Pointer for the renderer
        SDL_Window *window = NULL;      // Pointer for the window
};



#endif