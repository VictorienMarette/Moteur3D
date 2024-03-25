#include <cmath> 
#include <iostream>
#include <SDL.h>
#include "../src/Moteur3D.hpp"
#include "../src/ObjFileConvert.hpp"

class Player: public Camera{
    public:
        Player(double alpha_, double beta_, double near_, double far_, double screen_s_x_, double screen_s_y_) 
        : Camera(alpha_, beta_, near_, far_, screen_s_x_, screen_s_y_){}

        /*void event_handeler(SDL_Event event){
            switch (n)
            {
            case 1:
                a();
                break;
            case 2:
                b();
                d();
                [[fallthrough]]; // I meant to do this!
            case 3:
                c();
                break;
            default:
                d();
                break;
            }
                }*/

        
        void main() override{
            set_position(get_position() + Position(-0.1,0.,0.));
        }
};

int main(int argc, char * argv[]){
    Player c = Player(atan(1),atan(1),1.,16., 600,600);
    Mesh me = obj_file_convert("../../tests/untitled.obj");
    ObjectMesh ob = ObjectMesh(Position(10.,0.,0.), me);
    vector<ObjectMesh *> od = {&ob};
    vector<Object3D *> objr = {&ob, &c};
    Moteur3D m = Moteur3D(&c,&objr,&od,600,600);

    m.run();
}