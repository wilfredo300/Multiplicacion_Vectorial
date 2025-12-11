#pragma once
#include<iostream>
using namespace std;
struct Vector3{
    float x;
    float y;
    float z;
    Vector3 operator+(const Vector3 &);
    Vector3 operator*(const Vector3 &);
    Vector3 operator^(const Vector3 &);
    friend ostream& operator <<(ostream &, const Vector3 &);
    friend ostream& operator >>(ostream &, const Vector3 &);
};

Vector3 Vector3::operator +(const Vector3 & V){
    Vector3 resultado;
    resultado.x = x + V.x;
    resultado.y = y + V.y;
    resultado.z = z + V.z;
    return resultado;
}
Vector3 Vector3::operator *(const Vector3 & V){
    Vector3 resultado;
    resultado.x = x * V.x;
    resultado.y = y * V.y;
    resultado.z = z * V.z;
    return resultado;
}
Vector3 Vector3::operator ^(const Vector3 & V){
    Vector3 resultado;
    resultado.x = y*V.z - z*V.y;
    resultado.y = z*V.x - x*V.z;
    resultado.z = x*V.y - y*V.x;
    return resultado;
}
ostream & operator <<(ostream & out, const Vector3 &V){
    out<<"("<<V.x<<","<<V.y<<","<<V.z<<")";
    return out;
}
istream & operator >>(istream & in, Vector3 &V){
    in>>V.x>>V.y>>V.z;
    return in;
}