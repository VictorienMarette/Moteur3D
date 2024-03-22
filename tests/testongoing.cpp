#include <cmath> 
#include <iostream>
#include <SDL.h>
#include "../src/Moteur3D.hpp"


int main(int argc, char * argv[]){
    Camera c = Camera(atan(1),atan(1),1.,16., 600,600);
    Mesh me = Mesh({Position(0.,2., -1.), Position(0.,-2., -1.),Position(0.,0., 2.)}, {Polygone(0,1,2)});
    ObjectMesh ob = ObjectMesh(Position(7.,0.,0.), me);
    vector<ObjectMesh> od = {ob};
    vector<Object3D> objr = {ob, c};
    Moteur3D m = Moteur3D(&c,&objr,&od,600,600);

    m.run();
    
}