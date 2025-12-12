#include<iostream>
#include"Vector3.h"
using namespace std;

int main(){
    Vector3 A,B,R;
    int opcion;
    cout << "=== OPERACIONES CON VECTORES 3D ===\n\n";
    cout << "Ingrese el primer vector (x y z): ";
    cin>>A;

    cout << "Ingrese el segundo vector (x y z): ";
    cin>>B;
    do {
        cout << "\n===== MENU =====\n";
        cout << "Elige una opcion: \n";
        cout << "1. Multiplicacion componente a componente (A * B)\n";
        cout << "2. Producto Cruz (A ^ B)\n";
        cout << "3. Volver a ingresar nuevos vectores\n";
        cout << "0. Salir\n";
        cin >> opcion;

        switch(opcion){

            case 1:
                system("cls");
                cout<<"\n--- MULTIPLICACION COMPONENTE A COMPONENTE ---\n";
                cout<<"\tA = "<<A.x<<"i + "<<A.y<<"j + "<<A.z<<"k\n";
                cout<<"\tB = "<<B.x<<"i + "<<B.y<<"j + "<<B.z<<"k\n\n";
                sleep(1);
                cout<<"\tFormula:\n";
                cout<<"\t(A.x * B.x)i + (A.y * B.y)j + (A.z * B.z)k\n";
                
                R=A * B;
                sleep(1);
                cout<<"\tResultado = "<<R.x<<"i + "<<R.y<<"j + "<<R.z<<"k\n"<<" = "<< "\t("<<R.x<<","<<R.y<<","<<R.z<<")";
                sleep(1);
                break;

            case 2:
                cout<< "\n--- PRODUCTO CRUZ ---\n";
                cout<<"\tA = "<<A.x<<"i + "<<A.y<<"j + "<<A.z<<"k\n";
                cout<<"\tB = "<<B.x<<"i + "<<B.y<<"j + "<<B.z<<"k\n";
                sleep(1);
                cout<<"\t\nFormula del producto cruz:\n";
                cout<<"\tu x v = (b1*c2 - c1*b2)i + (c1*a2 - a1*c2)j + (a1*b2 - b1*a2)k\n";
                sleep(1);
                cout<<"\t\nSustituyendo:\n";
                cout<<"\t("<<A.y<<"*"<<B.z<<" - "<<A.z<<"*"<<B.y<<")i + ";
                cout<<"\t("<<A.z<<"*"<<B.x<<" - "<<A.x<<"*"<<B.z<< ")j + ";
                cout<<"\t("<<A.x<<"*"<<B.y<<" - "<<A.y<<"*"<<B.x<<")k\n";
                
                R=A ^ B;
                sleep(1);
                cout<<"\t\nResultado = "<<R.x<<"i + "<<R.y<<"j + "<<R.z<< "k\n"<<" = "<< "("<<R.x<<","<<R.y<<","<<R.z<<")";
                sleep(1);
                dibujito(A,B,R);
                sleep(1);
                break;

            case 3:
                cout << "\nReingresar valores:\n";
                cout << "\tIngrese el vector A (x y z): ";
                cin >> A;
                cout << "\tIngrese el vector B (x y z): ";
                cin >> B;
                break;

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida.\n";
                break;
        }

    } while (opcion != 0);

    return 0;
}