#include<iostream>
#include<cmath>
#include "cartesiano.h"
using namespace std;

Punto::Punto(){}

Punto::Punto(float _x, float _y){
    x = _x;
    y = _y;
}

void Punto::setX(float _x){
    x=_x;
}

void Punto::setY(float _y){
    y=_y;
}

float Punto::getX(){
    return x;
}

float Punto::getY(){
    return y;
}

void Punto::mostrar(){
    cout << "(" << x << "," << y << ")" << endl;
}

Linea::Linea(){}

Linea::Linea(float x1, float y1, float x2, float y2){
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(x2);
    p2.setY(y2);
}

void Linea::mostrarLinea(){
    cout << "Punto 1 (x): " <<p1.getX()<<endl;
    cout << "Punto 1 (y): "<<p1.getY()<<endl;
    cout << "Punto 2 (x): "<<p2.getX()<<endl; 
    cout << "Punto 2 (y): "<<p2.getY()<<endl;
}



