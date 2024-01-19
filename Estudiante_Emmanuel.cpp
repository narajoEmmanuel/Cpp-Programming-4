/*
Nombre: Emmanuel Naranjo
Fecha creacion: 20/9/19
Ultima modificacion:23/9/19
*/

//Directivas para el compilador
#include <iostream>
#include <string>
#include <vector>
#include "Estudiante.h"

using namespace std;

//Definicion de funciones
/*
Funcion:Muestra los datos del vector
Entrada:Vector
Salida:Datos del vector
*/
void mostrar_Datos(vector <Estudiante>& vector_estudiante){
    for(auto i:vector_estudiante){
        cout<<"Nombre: "<<i.getNombre()<<endl;
        cout<<"Carnet: "<<i.getCarnet()<<endl;
        cout << "-----------------" << endl;
    }
}

//Definicion de la funcion main
int main() {
    vector <Estudiante> vector_estudiante;
    int opcion;
    string nom;
    int car;
    Estudiante estudiante;
    cout<<"\t\tPrograma 1: Clase Estudiante"<<endl;
    /*Estudiante est1("Pepe",2019000001);
    vector_estudiante.push_back(est1);
    Estudiante est2("Paco",2019000002);
    vector_estudiante.push_back(est2);
    Estudiante est3("Marta",2019000003);
    vector_estudiante.push_back(est3);
    Estudiante est4("Maria",2019000004);
    vector_estudiante.push_back(est4);

    mostrar_Datos(vector_estudiante);*/

    do {
        cout << "\nMENU PRINCIPAL\t"<<endl;
        cout << "1- Agregar datos de estudiante " << endl;
        cout << "2- Mostrar datos de estudiantes " << endl;
        cout << "3- Fin" << endl;
        cout << "Opcion: " << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Agregar datos de estudiante" << endl;
                cout << "-------------------------" << endl;
                cout<<"Nombre: "<<endl;
                cin.ignore();
                getline(cin,nom);
                cout<<"Carnet: ";cin>>car;
                ingresar_datos(estudiante,vector_estudiante, nom, car);
                break;
            case 2:
                cout << "Mostrar datos de estudiantes" << endl;
                cout << "-------------------------" << endl;
                mostrar_Datos(vector_estudiante);
                break;
            case 3:
                break;
            default:
                cout << "Error: La opcion no es valida." << endl;
        }
    } while (opcion != 3);
    return 0;
}
