#ifndef MATRIX_H
#define MATRIX_H
#include "PositionQuaternion.hpp"


struct Vector4{

    Vector4();
    Vector4(double a0_, double a1_, double a2_, double a3_);

    Vector4 operator+(const Vector4 vector);
    operator std::string() const;  

    double a0;
    double a1;
    double a2;
    double a3;
};



// We will use matimaticals notations for matrixes.
struct Matrix4x4{

    Matrix4x4();

    void operator=(const Matrix4x4 m);
    Vector4 operator*(const Vector4 vector);
    Matrix4x4 operator*(const Matrix4x4 matrix);
    void cout_m() const;

    double a00;
    double a01;
    double a02;
    double a03;
    
    double a10;
    double a11;
    double a12;
    double a13;

    double a20;
    double a21;
    double a22;
    double a23;

    double a30;
    double a31;
    double a32;
    double a33;
};


Vector4 position_to_vector4(Position position);
Position2 vector4_to_position2(Vector4 vect); //needs a3 != 0
Matrix4x4 position_to_translation_matrix(Position position);
Matrix4x4 quaternion_to_matrix(Quaternion q);


#endif