#include "Matrix.hpp"


Vector4::Vector4(){
    a0 = 0.0;
    a1 = 0.0;
    a2 = 0.0;
    a3 = 0.0; 
}

Vector4::Vector4(double a0_, double a1_, double a2_, double a3_){
    a0 = a0_;
    a1 = a1_;
    a2 = a2_;
    a3 = a3_; 
}

Vector4 Vector4::operator+(const Vector4 vector){
    return Vector4(a0+vector.a0, a1+vector.a1, a2+vector.a2, a3+vector.a3);
}

Vector4::operator std::string() const{
    return "(" + std::to_string(a0) + "," + std::to_string(a1) + "," + std::to_string(a2) + "," + std::to_string(a3) + ")";
}


Matrix4x4::Matrix4x4(){
    a00 = 0.0;
    a01 = 0.0;
    a02 = 0.0;
    a03 = 0.0;
    
    a10 = 0.0;
    a11 = 0.0;
    a12 = 0.0;
    a13 = 0.0;

    a20 = 0.0;
    a21 = 0.0;
    a22 = 0.0;
    a23 = 0.0;

    a30 = 0.0;
    a31 = 0.0;
    a32 = 0.0;
    a33 = 0.0;
}


void Matrix4x4::operator=(const Matrix4x4 m){
    a00 = m.a00;
    a01 = m.a01;
    a02 = m.a02;
    a03 = m.a03;
    
    a10 = m.a10;
    a11 = m.a11;
    a12 = m.a12;
    a13 = m.a13;

    a20 = m.a20;
    a21 = m.a21;
    a22 = m.a22;
    a23 = m.a23;

    a30 = m.a30;
    a31 = m.a31;
    a32 = m.a32;
    a33 = m.a33;
}

Vector4 Matrix4x4::operator*(const Vector4 vector){
    Vector4 v = Vector4();
    v = v + Vector4(vector.a0*a00, vector.a0*a10, vector.a0*a20, vector.a0*a30);
    v = v + Vector4(vector.a1*a01, vector.a1*a11, vector.a1*a21, vector.a1*a31);
    v = v + Vector4(vector.a2*a02, vector.a2*a12, vector.a2*a22, vector.a2*a32);
    v = v + Vector4(vector.a3*a03, vector.a3*a13, vector.a3*a23, vector.a0*a33);
    return v;
}

Matrix4x4 Matrix4x4::operator*(const Matrix4x4 matrix){
    Matrix4x4 m = Matrix4x4();

    m.a00 = a00*matrix.a00 + a01*matrix.a10 + a02*matrix.a20 + a03*matrix.a30;
    m.a10 = a10*matrix.a00 + a11*matrix.a10 + a12*matrix.a20 + a13*matrix.a30;
    m.a20 = a20*matrix.a00 + a21*matrix.a10 + a22*matrix.a20 + a23*matrix.a30;
    m.a30 = a30*matrix.a00 + a31*matrix.a10 + a32*matrix.a20 + a33*matrix.a30;

    m.a01 = a00*matrix.a01 + a01*matrix.a11 + a02*matrix.a21 + a03*matrix.a31;
    m.a11 = a10*matrix.a01 + a11*matrix.a11 + a12*matrix.a21 + a13*matrix.a31;
    m.a21 = a20*matrix.a01 + a21*matrix.a11 + a22*matrix.a21 + a23*matrix.a31;
    m.a31 = a30*matrix.a01 + a31*matrix.a11 + a32*matrix.a21 + a33*matrix.a31;  

    m.a02 = a00*matrix.a02 + a01*matrix.a12 + a02*matrix.a22 + a03*matrix.a32;
    m.a12 = a10*matrix.a02 + a11*matrix.a12 + a12*matrix.a22 + a13*matrix.a32;
    m.a22 = a20*matrix.a02 + a21*matrix.a12 + a22*matrix.a22 + a23*matrix.a32;
    m.a32 = a30*matrix.a02 + a31*matrix.a12 + a32*matrix.a22 + a33*matrix.a32;  

    m.a03 = a00*matrix.a03 + a01*matrix.a13 + a02*matrix.a23 + a03*matrix.a33;
    m.a13 = a10*matrix.a03 + a11*matrix.a13 + a12*matrix.a23 + a13*matrix.a33;
    m.a23 = a20*matrix.a03 + a21*matrix.a13 + a22*matrix.a23 + a23*matrix.a33;
    m.a33 = a30*matrix.a03 + a31*matrix.a13 + a32*matrix.a23 + a33*matrix.a33;

    return m;    
}

void Matrix4x4::cout_m() const{
    std::cout << "(" + std::to_string(a00) + "," + std::to_string(a01) + "," + std::to_string(a02) + "," + std::to_string(a03) + ")"
    << std::endl << "(" + std::to_string(a10) + "," + std::to_string(a11) + "," + std::to_string(a12) + "," + std::to_string(a13) + ")"
    << std::endl << "(" + std::to_string(a20) + "," + std::to_string(a21) + "," + std::to_string(a22) + "," + std::to_string(a23) + ")"
    << std::endl << "(" + std::to_string(a30) + "," + std::to_string(a31) + "," + std::to_string(a32) + "," + std::to_string(a33) + ")"
    << std::endl;
}


Vector4 position_to_vector4(Position position){
    return Vector4(position.x, position.y, position.z, 1.0);
}

Position2 vector4_to_position2(Vector4 vector){
    return Position2(vector.a0/vector.a3, vector.a1/vector.a3);
}

Matrix4x4 position_to_translation_matrix(Position position){
    Matrix4x4 m = Matrix4x4();
    m.a00 = 1.0;
    m.a11 = 1.0;
    m.a22 = 1.0;
    m.a33 = 1.0;
    m.a03 = position.x;
    m.a13 = position.y;
    m.a23 = position.z;
    return m; 
}

Matrix4x4 quaternion_to_matrix(Quaternion q){
    Matrix4x4 m = Matrix4x4();

    m.a00 = 1-2*(q.j*q.j+q.k*q.k);
    m.a01 = 2*(q.i*q.j+q.k*q.r);
    m.a02 = 2*(q.i*q.k-q.j*q.r);

    m.a10 = 2*(q.i*q.j-q.k*q.r);
    m.a11 = 1-2*(q.i*q.i+q.k*q.k);
    m.a12 = 2*(q.j*q.k+q.i*q.r);

    m.a20 = 2*(q.i*q.k+q.j*q.r);
    m.a21 = 2*(q.j*q.k-q.i*q.r);
    m.a22 = 1-2*(q.i*q.i+q.j*q.j);  

    m.a33 = 1;

    return m;  
}