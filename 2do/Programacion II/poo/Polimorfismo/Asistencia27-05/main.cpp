/*
Se tiene una aplicacion que permite dibujar distintas figuras geométricas, pueden ser rectángulos
circulos y triangulos
Crea un programa en c++ utilizando herencia y polimorfismos, que permita crear un arreglo con 8 figuras
geométricas y segun el tipo indique por pantalla su perimetro y su area
*/

#include <iostream>
#include <cmath>
#include "figura.h"
using namespace std;

int main(){
    Figura *figuras[8];
    figuras[0] = new Rectangulo(2, 3);
    figuras[1] = new Rectangulo(4, 5);
    figuras[2] = new Rectangulo(6, 7);
    figuras[3] = new Rectangulo(8, 9);
    figuras[4] = new Circulo(10);
    figuras[5] = new Circulo(11);
    figuras[6] = new Triangulo(12, 13, 14);
    figuras[7] = new Triangulo(15, 16, 17);

    for(int i = 0; i < 8; i++){
        figuras[i]->mostrar();
    }

}