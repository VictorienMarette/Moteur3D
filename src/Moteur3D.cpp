#include "Moteur3D.hpp"

Moteur3D::Moteur3D(Camera *camera_, vector<Object3D> *objs_to_run_, vector<ObjectMesh> *objs_to_render_, int height_, int width_){
    camera = camera_;
    objs_to_run = objs_to_run_; 
    objs_to_render = objs_to_render_;
    height = height_;
    width = width_;

    SDL_Init(SDL_INIT_VIDEO);       // Initializing SDL as Video
    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);      // setting draw color
    SDL_RenderClear(renderer);      // Clear the newly created window
    SDL_RenderPresent(renderer);    // Reflects the changes done in the window.
}

void Moteur3D::run(){
    for (int i = 0; i < objs_to_run->size(); i++){
        (*objs_to_run)[i].main();
    }
    camera->render(objs_to_render, renderer);
    SDL_RenderClear(renderer);      
    SDL_RenderPresent(renderer);
}