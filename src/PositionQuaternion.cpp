#include "PositionQuaternion.hpp"
#include <cmath>


Position::Position(){x=0.;y=0.;z=0.;}

Position::Position(double x_, double y_, double z_){x=x_;y=y_;z=z_;}

Position::operator std::string() const{
    return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}


Position2::Position2(){x=0.;y=0.;}

Position2::Position2(double x_, double y_){x=x_;y=y_;}


Quaternion::Quaternion(){r=1.;i=0.;j=0.;k=0.;}

Quaternion::Quaternion(double r_, double i_, double j_, double k_){r=r_;i=i_;j=j_;k=k_;}

Quaternion Quaternion::operator*(const Quaternion quaternion){
    Quaternion q = Quaternion();

    q.r = r*quaternion.r - i*quaternion.i - j*quaternion.j - k*quaternion.k;
    q.i = r*quaternion.i + i*quaternion.r + j*quaternion.k - k*quaternion.j;
    q.j = r*quaternion.j + j*quaternion.r + k*quaternion.i - i*quaternion.k;
    q.k = r*quaternion.k + i*quaternion.j + k*quaternion.r - j*quaternion.i;

    return q;
}

Quaternion Quaternion::inverse(){
    double norme = r*r+i*i+j*j+k*k;
    return Quaternion(r/norme, -i/norme, -j/norme, -k/norme);
}

Quaternion::operator std::string() const{
    return "(" + std::to_string(r) + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + ")";
} 


Quaternion rotation_to_quaternion(double angle, double x, double y, double z){
    double norme = sqrt(x*x+y*y+z*z);
    x = x/norme;
    y = y/norme;
    z = z/norme;
    return Quaternion(cos(angle/2.0),sin(angle/2.0)*x, sin(angle/2.0)*y, sin(angle/2.0)*z);
}