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

int main(){
    int h,m,s;
    Hora h1(h,m,s);
    Hora h2(h,m,s);
    Hora h3;

    cout<<"Ingrese la hora 1: "<<endl;
    cout<<"Horas: "; cin>>h; h1.setHoras(h);
    cout<<"Minutos: "; cin>>m; h1.setMinutos(m);
    cout<<"Segundos: "; cin>>s; h1.setSegundos(s);
    cout<<""<<endl;
    h1.visualizar();
    cout<<""<<endl;
    cout<<"Ingrese la hora 2: "<<endl;
    cout<<"Horas: "; cin>>h; h2.setHoras(h);
    cout<<"Minutos: "; cin>>m; h2.setMinutos(m);
    cout<<"Segundos: "; cin>>s; h2.setSegundos(s);
    cout<<""<<endl;
    h2.visualizar();

    h3 = h1.operator+(h2);
    h3.simplificar();
    cout<<""<<endl;
    cout<<"Resultado de la suma: "<<endl;
    h3.visualizar();

}