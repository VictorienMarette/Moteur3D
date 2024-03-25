#include "Moteur3D.hpp"

Moteur3D::Moteur3D(Camera *camera_, vector<Object3D *> *objs_to_run_, vector<ObjectMesh *> *objs_to_render_, int height_, int width_){
    camera = camera_;
    objs_to_run = objs_to_run_; 
    objs_to_render = objs_to_render_;
    height = height_;
    width = width_;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);
}

Moteur3D::~Moteur3D(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Moteur3D::run(float delay){
    while(true){
        run_one_cycle();
        if (event.type == SDL_QUIT){
            break;
        }
        SDL_Delay(delay);
    }
    this->~Moteur3D();
}

void Moteur3D::run_one_cycle(){
    //Objects updates
    for (int i = 0; i < objs_to_run->size(); i++){
        (*objs_to_run)[i]->main();
    }

    //Events
    SDL_PollEvent(&event);
    for (int i = 0; i < objs_to_run->size(); i++){
        (*objs_to_run)[i]->event_handeler(event);
    }

    //render
    SDL_SetRenderDrawColor(renderer, 242, 242, 242, 255);
    SDL_RenderClear(renderer);
    camera->render(objs_to_render, renderer);
    SDL_RenderPresent(renderer);
}