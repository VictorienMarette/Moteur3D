#include "Moteur3D.hpp"

Moteur3D::Moteur3D(Camera *camera_, vector<Object3D> *objs_to_run_, vector<ObjectMesh> *objs_to_render_, int height_, int width_){
    camera = camera_;
    objs_to_run = objs_to_run_; 
    objs_to_render = objs_to_render_;
    height = height_;
    width = width_;

    SDL_Init(SDL_INIT_VIDEO);       // Initializing SDL as Video
    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);
}

void Moteur3D::run_one_cycle(){
    for (int i = 0; i < objs_to_run->size(); i++){
        (*objs_to_run)[i].main();
    }

    SDL_SetRenderDrawColor(renderer, 242, 242, 242, 255);
    SDL_RenderClear(renderer);

    camera->render(objs_to_render, renderer);

    SDL_RenderPresent(renderer);
    
}