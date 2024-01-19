/*
Nombre: Emmanuel Naranjo
Fecha creacion: 20/9/19
Ultima modificacion:23/9/19
*/

//Directivas para el compilador
#include <iostream>
#include <vector>
#include "Tiempo.h"

using namespace std;

//Definicion de funciones
void ingresar_datos(Tiempo&tiempo1, Tiempo&tiempo2){
    int h,m,s;
    cout<<"Ingrese el tiempo 1:"<<endl;
    cout<<"Horas: ";cin>>h;tiempo1.setHoras(h);
    cout<<"Minutos: ";cin>>m;tiempo1.setMinutos(m);
    cout<<"Segundos: ";cin>>s;tiempo1.setSegundos(s);

    cout<<"Ingrese el tiempo 2:"<<endl;
    cout<<"Horas: ";cin>>h;tiempo2.setHoras(h);
    cout<<"Minutos: ";cin>>m;tiempo2.setMinutos(m);
    cout<<"Segundos: ";cin>>s;tiempo2.setSegundos(s);
}

//Definicion de la funcion main
int main() {
    cout<<"\t\tPrograma 2: Clase Tiempo"<<endl;
    Tiempo suma_tiempos,mayor;

    //Tiempo tiempo1(13,20,30);
    //Tiempo tiempo2(2,10,50);

    Tiempo tiempo1, tiempo2;
    ingresar_datos(tiempo1,tiempo2);

    suma_tiempos= tiempo1+tiempo2;
    mayor=tiempo1.tiempo_mayor(tiempo2);
    cout<<"Suma de tiempos: "; suma_tiempos.mostrar_tiempo();
    cout<<"Tiempo mayor: ";mayor.mostrar_tiempo();


    return 0;
}

