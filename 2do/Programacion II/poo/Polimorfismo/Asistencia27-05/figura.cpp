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

Rectangulo::Rectangulo(){
}

Rectangulo::Rectangulo(float _base, float _altura): Figura(){
    base = _base;
    altura = _altura;
}

void Rectangulo::setBase(float _base){
    base = _base;
}

void Rectangulo::setAltura(float _altura){
    altura = _altura;
}

float Rectangulo::getBase(){
    return base;
}

float Rectangulo::getAltura(){
    return altura;
}

float Rectangulo::area(){
    return (base * altura);
}

float Rectangulo::perimetro(){
    return (2 * base + 2 * altura);
}

void Rectangulo::mostrar(){
    cout<<endl;
    cout << "Rectangulo" << endl;
    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
}

Circulo::Circulo(){
}

Circulo::Circulo(float _radio): Figura(){
    radio = _radio;
}

void Circulo::setRadio(float _radio){
    radio = _radio;
}

float Circulo::getRadio(){
    return radio;
}

float Circulo::area(){
    return (M_PI * pow(radio, 2));
}

float Circulo::perimetro(){
    return (2 * M_PI * radio);
}

void Circulo::mostrar(){
    cout<<endl;
    cout << "Circulo" << endl;
    cout << "Radio: " << radio << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
}

Triangulo::Triangulo(){
}

Triangulo::Triangulo(float _lado1, float _lado2, float _lado3): Figura(){
    lado1 = _lado1;
}

void Triangulo::setLado1(float _lado1){
    lado1 = _lado1;
}

float Triangulo::getLado1(){
    return lado1;
}

float Triangulo::area(){
    return ((lado1 * lado1 * sqrt(3)) / 4);
}

float Triangulo::perimetro(){
    return (3 * lado1);
}

void Triangulo::mostrar(){
    cout<<endl;
    cout << "Triangulo" << endl;
    cout << "Lado: " << lado1 << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
}
