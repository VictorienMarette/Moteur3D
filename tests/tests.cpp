#include <gtest/gtest.h>
#include <cmath> 
#include <iostream>
#include "../src/Object3D.hpp"
#include "../src/ObjectMesh.hpp"


TEST(position, initialization){
    Position p = Position(1.0,2.0,3.0);
    EXPECT_EQ(p.x, 1.0);
    EXPECT_EQ(p.y, 2.0);
    EXPECT_EQ(p.z, 3.0);
}

TEST(quaternion, initialization){
    Quaternion q = Quaternion(1.0,2.0,3.0,4.0);
    EXPECT_EQ(q.r, 1.0);
    EXPECT_EQ(q.i, 2.0);
    EXPECT_EQ(q.j, 3.0);
    EXPECT_EQ(q.k, 4.0);
    q = Quaternion();
    EXPECT_EQ(q.r, 1.0);
    EXPECT_EQ(q.i, 0.0);
    EXPECT_EQ(q.j, 0.0);
    EXPECT_EQ(q.k, 0.0);
}

TEST(quaternion, multiplication){   
    Quaternion q1 = Quaternion(0.0,3.0,0.0,-1.0);
    Quaternion q2 = Quaternion(2.0,0.0,1.0,1.0);
    Quaternion q3 = q1*q2;
    Quaternion q4 = q2*q1;
    EXPECT_EQ(q3.r, 1.0);
    EXPECT_EQ(q3.i, 7.0);
    EXPECT_EQ(q3.j, -3.0);
    EXPECT_EQ(q3.k, 1.0);
    EXPECT_EQ(q4.r, 1.0);
    EXPECT_EQ(q4.i, 5.0);
    EXPECT_EQ(q4.j, 3.0);
    EXPECT_EQ(q4.k, -5.0);
}

TEST(quaternion, inverse){   
    Quaternion q1 = Quaternion(0.0,3.0,0.0,-1.0)*Quaternion(0.0,3.0,0.0,-1.0).inverse();
    EXPECT_NEAR(q1.r, 1.0, 0.0001);
    EXPECT_NEAR(q1.i, 0.0, 0.0001);
    EXPECT_NEAR(q1.j, 0.0, 0.0001);
    EXPECT_NEAR(q1.k, 0.0, 0.0001);
}


TEST(object3D, initialization_and_set_position){
    Object3D obj = Object3D(Position(1.0,2.0,3.0));
    Position p = obj.get_position();
    EXPECT_EQ(p.x, 1.0);
    EXPECT_EQ(p.y, 2.0);
    EXPECT_EQ(p.z, 3.0);
    obj.set_position(Position(2.0,3.0,4.0));
    p = obj.get_position();
    EXPECT_EQ(p.x, 2.0);
    EXPECT_EQ(p.y, 3.0);
    EXPECT_EQ(p.z, 4.0);
    p.x = 5.0;
    EXPECT_EQ(obj.get_position().x, 2.0);
}

TEST(object3D, rotate){
    Object3D obj = Object3D();
    obj.rotate_axis_y(-atan(1)*2);
    obj.rotate_axis_x(-atan(1)*2);
    Vector4 v = quaternion_to_matrix(obj.get_quaternion())*Vector4(1.0,0.0,0.0,1.0);
    EXPECT_NEAR(v.a0, 0.0, 0.0001);
    EXPECT_NEAR(v.a1, 1.0, 0.0001);
    EXPECT_NEAR(v.a2, 0.0, 0.0001);
    EXPECT_NEAR(v.a3, 1.0, 0.0001);
}


TEST(vector4, constructor){
    Vector4 v = Vector4();

    EXPECT_NEAR(v.a0, 0.0, 0.0001);
    EXPECT_NEAR(v.a1, 0.0, 0.0001);
    EXPECT_NEAR(v.a2, 0.0, 0.0001);
    EXPECT_NEAR(v.a3, 0.0, 0.0001);
}


TEST(matrix, constructor){
    Matrix4x4 m = Matrix4x4();
    
    EXPECT_TRUE(std::abs (m.a00) < 0.0001);
    EXPECT_TRUE(std::abs (m.a01) < 0.0001);
    EXPECT_TRUE(std::abs (m.a02) < 0.0001);
    EXPECT_TRUE(std::abs (m.a03) < 0.0001);

    EXPECT_TRUE(std::abs (m.a10) < 0.0001);
    EXPECT_TRUE(std::abs (m.a11) < 0.0001);
    EXPECT_TRUE(std::abs (m.a12) < 0.0001);
    EXPECT_TRUE(std::abs (m.a13) < 0.0001);

    EXPECT_TRUE(std::abs (m.a20) < 0.0001);
    EXPECT_TRUE(std::abs (m.a21) < 0.0001);
    EXPECT_TRUE(std::abs (m.a22) < 0.0001);
    EXPECT_TRUE(std::abs (m.a23) < 0.0001);

    EXPECT_TRUE(std::abs (m.a30) < 0.0001);
    EXPECT_TRUE(std::abs (m.a31) < 0.0001);
    EXPECT_TRUE(std::abs (m.a32) < 0.0001);
    EXPECT_TRUE(std::abs (m.a33) < 0.0001);
}

TEST(matrix, multiplication){
    Matrix4x4 m1 = Matrix4x4();
    Matrix4x4 m2 = Matrix4x4();
    Matrix4x4 m3 = Matrix4x4();

    m1.a00 = 4;
    m1.a02 = 1;
    m1.a10 = 2;
    m1.a21 = 1;
    m1.a32 = 3;

    m2.a00 = 1;
    m2.a11 = 1;
    m2.a22 = 1;
    m2.a33 = 1;

    m3.a00 = 6;
    m3.a13 = 1;
    m3.a23 = 1;
    m3.a31 = 2;

    Matrix4x4 m4 = m1*m2;
    EXPECT_EQ(m4.a00, 4);
    EXPECT_EQ(m4.a02, 1);
    EXPECT_EQ(m4.a10, 2);
    EXPECT_EQ(m4.a21, 1);
    EXPECT_EQ(m4.a32, 3);

    Matrix4x4 m5 = m3*m2;
    EXPECT_EQ(m5.a00, 6);
    EXPECT_EQ(m5.a13, 1);
    EXPECT_EQ(m5.a23, 1);
    EXPECT_EQ(m5.a31, 2);
    
    Matrix4x4 m6 = m3*m1;
    EXPECT_EQ(m6.a00, 24);
    EXPECT_EQ(m6.a02, 6);
    EXPECT_EQ(m6.a12, 3);
    EXPECT_EQ(m6.a22, 3);
    EXPECT_EQ(m6.a30, 4);
}

TEST(matrix, translation_matrix){
    Matrix4x4 m1 = position_to_translation_matrix(Position(1.0,1.0,1.0));
    
    EXPECT_NEAR(m1.a00, 1.0, 0.0001);
    EXPECT_NEAR(m1.a01, 0.0, 0.0001);
    EXPECT_NEAR(m1.a02, 0.0, 0.0001);
    EXPECT_NEAR(m1.a03, 1.0, 0.0001);

    EXPECT_NEAR(m1.a10, 0.0, 0.0001);
    EXPECT_NEAR(m1.a11, 1.0, 0.0001);
    EXPECT_NEAR(m1.a12, 0.0, 0.0001);
    EXPECT_NEAR(m1.a13, 1.0, 0.0001);

    EXPECT_NEAR(m1.a20, 0.0, 0.0001);
    EXPECT_NEAR(m1.a21, 0.0, 0.0001);
    EXPECT_NEAR(m1.a22, 1.0, 0.0001);
    EXPECT_NEAR(m1.a23, 1.0, 0.0001);

    EXPECT_NEAR(m1.a30, 0.0, 0.0001);
    EXPECT_NEAR(m1.a31, 0.0, 0.0001);
    EXPECT_NEAR(m1.a32, 0.0, 0.0001);
    EXPECT_NEAR(m1.a33, 1.0, 0.0001);
}

TEST(matrix, translation_matrix_and_multiplie){
    Matrix4x4 m = position_to_translation_matrix(Position(1.0,1.0,1.0));
    Vector4 v = m*position_to_vector4(Position(1.0,2.0,3.0));
    EXPECT_EQ(v.a0, 2.0);
    EXPECT_EQ(v.a1, 3.0);
    EXPECT_EQ(v.a2, 4.0);
    EXPECT_EQ(v.a3, 1.0);
}

TEST(matrix_and_quaternion, rotation_to_quaternion_and_quaternion_to_matrix){
    Vector4 v = quaternion_to_matrix(rotation_to_quaternion(atan(1)*2, 0, 1, 0))*Vector4(1,0,0,1);
    EXPECT_NEAR(v.a0, 0.0, 0.0001);
    EXPECT_NEAR(v.a1, 0.0, 0.0001);
    EXPECT_NEAR(v.a2, 1.0, 0.0001);
    EXPECT_NEAR(v.a3, 1.0, 0.0001);
}