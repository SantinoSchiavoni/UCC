/*
Realizar una clase que permita representar un punto en coordenadas 
cartesianas. 
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir un constructor que inicializa el punto en el origen de coordenadas. 
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas 
coordenadas. 
 Idem para el operador --. 
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y 
otra para sumar a un punto un valor entero. 
 Idem para el operador -. 
 Definir la/las función/es miembro para obtener la  conversión en coordenadas 
polares. 
 Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>
#include <math.h>
#include "punto.h"
using namespace std;

Coordenada::Coordenada(){
    x=0;
    y=0;
}

Coordenada::Coordenada(float eje_x, float eje_y){
    x=eje_x;
    y=eje_y;
}

void Coordenada::setX(float eje_x){
    x=eje_x;
}

void Coordenada::setY(float eje_y){
    y=eje_y;
}

float Coordenada::getX(){
    return x;
}

float Coordenada::getY(){
    return y;
}

void Coordenada::cargarDatos(){
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
}

void Coordenada::mostrarDatos(){
    cout << "El valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
}


void Coordenada::operator++(){
    x++;
    y++;
}

Coordenada Coordenada::operator+(Coordenada n){
    x=x+n.x;
    y=y+n.y;
    return *this;
}

Coordenada Coordenada::operator+(int n){
    x=x+n;
    y=y+n;
    return *this;
}

void Coordenada::operator--(){
    x--;
    y--;
}

Coordenada Coordenada::operator-(Coordenada n){
    x=x-n.x;
    y=y-n.y;
    return *this;
}

Coordenada Coordenada::operator-(int n){
    x=x-n;
    y=y-n;
    return *this;
}

float Coordenada::converPolarMagnitud(float x, float y){
    Coordenada aux;
    aux.x=x;
    aux.y=y;
    return sqrt(pow(aux.x,2)+pow(aux.y,2));
}

float Coordenada::converPolarAngulo(float x, float y){
    Coordenada aux;
    aux.x=x;
    aux.y=y;
    return (atan(aux.y/aux.x)*180/3.1416);
}