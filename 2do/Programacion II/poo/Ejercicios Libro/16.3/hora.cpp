/*
Crear una clase llamada hora que tenga miembros
datos separados de tipo int para horas, minutos y
segundos. Un constructor inicializará este dato a 0 y
otro lo inicializará a valores fijos. Una función
miembro deberá visualizar la hora en formato
11:59:59. Otra función miembro sumará dos objetos
de tipo hora pasados como argumentos. Una función
principal main() crea dos objetos inicializados y
uno que no está inicializado. Sumar los dos valores
inicializados y dejar el resultado en el objeto no inicializado.
Por último, visualizar el valor resultante.
*/

#include <iostream>
#include "hora.h"
using namespace std;

Hora::Hora(){
    horas = 0;
    minutos = 0;
    segundos = 0;
}

Hora::Hora(int h, int m, int s){
    horas = h;
    minutos = m;
    segundos = s;
}

void Hora::setHoras(int h){
    horas = h;
}

void Hora::setMinutos(int m){
    minutos = m;
}

void Hora::setSegundos(int s){
    segundos = s;
}

int Hora::getHoras(){
    return horas;
}

int Hora::getMinutos(){
    return minutos;
}

int Hora::getSegundos(){
    return segundos;
}

void Hora::visualizar(){
    cout << horas << ":" << minutos << ":" << segundos << endl;
}

Hora Hora::operator+(Hora h){
    Hora aux;
    aux.horas = horas + h.horas;
    aux.minutos = minutos + h.minutos;
    aux.segundos = segundos + h.segundos;
    return aux;
}

void Hora::simplificar(){
    if(segundos >= 60){
        minutos += segundos / 60;
        segundos = segundos % 60;
    }
    if(minutos >= 60){
        horas += minutos / 60;
        minutos = minutos % 60;
    }

    if(horas >= 24){
        horas = 0;
    }
}