#pragma once
#include<iostream>
#include<unistd.h>
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

void dibujito(const Vector3 &A, const Vector3 &B, const Vector3 &C);

void imprimicion(const Vector3 &A, const Vector3 &B){
    cout << "\n=== PRODUCTO VECTORIAL A x B (PASO A PASO) ===\n\n";
    sleep(1);

    cout << "Formula general:\n";
    cout << "A x B = (Ay*Bz - Az*By , Az*Bx - Ax*Bz , Ax*By - Ay*Bx)\n\n";
    sleep(1);

    float Cx = A.y*B.z - A.z*B.y;
    float Cy = A.z*B.x - A.x*B.z;
    float Cz = A.x*B.y - A.y*B.x;

    cout << "Componente X:\n";
    cout << "Cx = " << A.y << "*" << B.z << " - " << A.z << "*" << B.y << "\n";
    sleep(1);
    cout << "Cx = " << Cx << "\n\n";
    sleep(1);

    cout << "Componente Y:\n";
    cout << "Cy = " << A.z << "*" << B.x << " - " << A.x << "*" << B.z << "\n";
    sleep(1);
    cout << "Cy = " << Cy << "\n\n";
    sleep(1);

    cout << "Componente Z:\n";
    cout << "Cz = " << A.x << "*" << B.y << " - " << A.y << "*" << B.x << "\n";
    sleep(1);
    cout << "Cz = " << Cz << "\n\n";
    sleep(1);

    Vector3 C{Cx, Cy, Cz};
    cout << "Resultado final: A x B = " << C << "\n\n";
    sleep(1);

    if(Cx == 0 && Cy == 0 && Cz == 0){
        cout << "El resultado es el vector cero -> los vectores son LD (colineales).\n";
        cout << "Cuando apuntan en la misma direccion, el producto vectorial da 0.\n";
    } else {
        cout << "El resultado NO es cero -> los vectores son LI.\n";
        cout << "Se obtiene un vector perpendicular a ambos.\n";

        dibujito(A, B, C);
    }
    sleep(1);

    cout << "\n==============================================\n\n";
}

void dibujito(const Vector3 &A, const Vector3 &B, const Vector3 &C){
    cout << "\n=============================\n";
    cout << "    REPRESENTACION GRAFICA\n";
    cout << "=============================\n\n";

    cout << "                 ^\n";
    cout << "                 |\n";
    cout << "                 |\n";
    cout << "                 |\n";
    cout << "                 |      A x B = ("<<C.x<<","<<C.y<<","<<C.z<<")\n";
    cout << "                 |\n";
    cout << "                 |\n";
    cout << "                 |\n";
    cout << "                 |\n";
    cout << "                 . - - - - - - - - - - - - ->   B = ("<<B.x<<","<<B.y<<","<<B.z<<")\n";
    cout << "                  \\\n"; 
    cout << "                   \\\n"; 
    cout << "                    \\\n";
    cout << "                     \\\n";
    cout << "                      \\"; cout << "    A = ("<<A.x<<","<<A.y<<","<<A.z<<")\n";
    cout << "                       \\\n"; 
    cout << "                        \\\n";

}







