//
// Interfaz
//

#ifndef TIEMPO_TIEMPO_H
#define TIEMPO_TIEMPO_H
#include <iostream>
using namespace std;

class Tiempo {
private://atributos
    int horas ;
    int minutos;
    int segundos;

public://prototipos de las funciones
    Tiempo();
    Tiempo(int, int, int);

    void setHoras(int);
    void setMinutos(int);
    void setSegundos(int);

    Tiempo operator+(Tiempo);

    void mostrar_tiempo();
    friend void ingresar_datos(Tiempo&, Tiempo&);

    Tiempo tiempo_mayor(Tiempo);
};

#endif //TIEMPO_TIEMPO_H
