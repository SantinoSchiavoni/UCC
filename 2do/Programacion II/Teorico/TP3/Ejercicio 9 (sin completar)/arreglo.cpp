/*
Construir una clase que permita representar un arreglo unidimensional de 
enteros. Obtener las siguientes sobrecargas: 
 Operador + para sumar dos arreglos. 
 Operador – para restar dos arreglos. 
 Operador * para calcular el producto escalar de 2 arreglos. 
 Operador [] para subindicar los elementos del arreglo. 
Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>
#include "arreglo.h"
using namespace std;

Arreglo::Arreglo(){
}

Arreglo::Arreglo(int a,int _n){
    arreglo[0] = a;
    n = _n;
}

void Arreglo::setArreglo(int a){
    arreglo[0] = a;
}

int Arreglo::getArreglo(){
    return arreglo[0];
}

void Arreglo::setN(int _n){
    n = _n;
}

int Arreglo::getN(){
    return n;
}

Arreglo Arreglo::operator+(Arreglo a){
    int aux[n];// se declara un arreglo auxiliar de 100 elementos
    for(int i = 0; i < n; i++){
        aux[i] = arreglo[i] + a.arreglo[i];
    }
    setArreglo(aux[0]);
    return Arreglo (aux[0],n);// retorna un objeto de la clase Arreglo
}

Arreglo Arreglo::operator-(Arreglo a){
    int aux[n];
    for(int i = 0; i < n; i++){
        aux[i] = arreglo[i] - a.arreglo[i];
    }
    setArreglo(aux[0]);
    return Arreglo(aux[0],n);// retorna un objeto de la clase Arreglo
}

Arreglo Arreglo::operator*(Arreglo a){
    int aux[n];
    for(int i = 0; i < n; i++){
        aux[i] = arreglo[i] * a.arreglo[i];
    }
    setArreglo(aux[0]);
    return Arreglo(aux[0],n);// retorna un objeto de la clase Arreglo
}

int Arreglo::operator[](int i){
    return arreglo[i];
} 