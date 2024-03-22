#ifndef POSITIONQUATERNION_H
#define POSITIONQUATERNION_H
#include <iostream>
#include <cmath>


struct Position{

    Position();
    Position(double x_, double y_, double z_);
    
    operator std::string() const;  

    double x;
    double y;
    double z;
};


struct Position2{

    Position2();
    Position2(double x_, double y_);


    double x;
    double y;
};


struct Quaternion{

    Quaternion();
    Quaternion(double r_, double i_, double j_, double k_);

    Quaternion operator*(const Quaternion quaternion);
    Quaternion inverse();
    operator std::string() const; 

    double r;
    double i;
    double j;
    double k;
};


Quaternion rotation_to_quaternion(double angle, double x, double y, double z);
#endif