/*
Realizar  una  clase  que  permita  representar  un  cronómetro.  Dicho  cronómetro 
consta  de  horas,  minutos  y  segundos.  Las  horas  no  tienen  límite  en  valor 
mientras que los minutos y segundos llegan al máximo hasta 59. 
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa a cero el cronómetro. 
 Definir un método Reset que permita llevar a cero el cronómetro. 
 Definir la sobrecarga del operador ++ para producir el incremento del 
cronómetro en un segundo. 
 Realizar un programa principal que haga uso de la clase. 
*/

#include <iostream>
#include "cronometro.h"
using namespace std;

Cronometro::Cronometro(){
    horas=0;
    minutos=0;
    segundos=0;
}

Cronometro::Cronometro(int h, int m, int s){
    horas=h;
    minutos=m;
    segundos=s;
}

void Cronometro::setHoras(int h){
    horas=h;
}

void Cronometro::setMinutos(int m){
    minutos=m;
}

void Cronometro::setSegundos(int s){
    segundos=s;
}

int Cronometro::getHoras(){
    return horas;
}

int Cronometro::getMinutos(){
    return minutos;
}

int Cronometro::getSegundos(){
    return segundos;
}

void Cronometro::cargarDatos(){
    cout << "Ingrese horas: ";
    cin >> horas;
    cout << "Ingrese minutos: ";
    cin >> minutos;
    cout << "Ingrese segundos: ";
    cin >> segundos;
}

void Cronometro::mostrarDatos(){
    cout<<""<<endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    cout<<"-----------------"<<endl;
}

void Cronometro::reset(){
    horas=0;
    minutos=0;
    segundos=0;
    cout<<"Cronometro reseteado"<<endl;
}

void Cronometro::operator++(){
    segundos++;
    if(segundos==60){
        segundos=0;
        minutos++;
        if(minutos==60){
            minutos=0;
            horas++;
        }
    }
}