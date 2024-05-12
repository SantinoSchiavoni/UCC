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
#include <thread>
#include "cronometro.h"
using namespace std;

int main(){
    int time;
    Cronometro c;
    c.cargarDatos();
    c.mostrarDatos();

    cout<<"Ingrese el tiempo en segundos: ";
    cin>>time;
    for (int i = 0; i < time; i++) { // Ejecuta el bucle 60 veces
        ++c;
        c.mostrarDatos();
        this_thread::sleep_for(chrono::seconds(1)); // Espera 1 segundo
    }
    c.reset();
    c.mostrarDatos();
}