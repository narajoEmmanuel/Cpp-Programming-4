//
// Interfaz
//

//Directivas para el compilador
#ifndef FINAL_ESTUDIANTE_H
#define FINAL_ESTUDIANTE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante{
private://Atributos
    string nombre;
    int carnet;
public://Prototipos de las funciones
    Estudiante();
    Estudiante(string, int);


    string getNombre();
    int getCarnet();

    void setNombre(string);
    void setCarnet(int);

    //funcion amiga de la clase Estudinate
    friend void ingresar_datos(Estudiante&, vector <Estudiante>&, string, int);
};

#endif //FINAL_ESTUDIANTE_H
