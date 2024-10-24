#pragma once
#include <Vector.hpp>
#include <SerieNavidad.hpp>
#include <unistd.h>

class Lienzo
{
private:
    Vector posicion; //tener
    Vector tamano;
public:
    Lienzo(Vector p, Vector t) {
        this -> posicion=p; //sobrecarga de funciones mismo nombre diferente firma pregunta examen
        this -> tamano=t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie) //usar
    {
        serie.Imprimir();
    } 
    void Limpiar(){
        system("clear");
    }
};