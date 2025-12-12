#include<iostream>
#include"Vector3.h"
using namespace std;

int main(){
    system("cls");

    Vector3 A,B;

    cout<<"Ingrese A (x y z): ";
    cin>>A;
    cout<<"Ingrese B (x y z): ";
    cin>>B;

    imprimicion(A, B);
    return 0;
}