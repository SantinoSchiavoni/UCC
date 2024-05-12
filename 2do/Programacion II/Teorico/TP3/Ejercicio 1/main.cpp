/*
Realizar una clase que permita representar una fecha.  
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir un constructor que inicializa la fecha a una fecha dada. 
 Definir un constructor que inicializa la fecha en 01/01/1900. 
 Definir sobrecargas de los siguientes operadores: 
o ++ y – incrementa o decrementa la fecha en 1 día. 
o + y – suma a una fecha un cierto número de días. 
 Realizar un programa principal que haga uso de la clase
*/

#include <iostream>
#include "fecha.h"
using namespace std;

int main(){
    int d,m,y;
    fecha f1(1,1,1900);

    cout<<"Fecha por defecto"<<endl;
    f1.showDate();
    
    cout<<"Ingresa la fecha"<<endl;
    cout<<"Dia: ";
    cin>>d;
    cout<<"Mes: ";
    cin>>m;
    cout<<"Año: ";
    cin>>y;

    fecha f2(d,m,y);
    cout<<"Fecha ingresada"<<endl;
    f2.showDate();

    cout<<"Incremento de un dia"<<endl;
    f2.operator++();

    cout<<"Fecha incrementada"<<endl;
    f2.showDate();

    cout<<"Decremento de un dia"<<endl;
    f2.operator--();
    f2.operator--();

    cout<<"Fecha decrementada"<<endl;
    f2.showDate();

    cout<<"Suma de 5 dias"<<endl;
    f2.operator+(5);

    cout<<"Fecha sumada"<<endl;
    f2.showDate();

    cout<<"Resta de 15 dias"<<endl;
    f2.operator-(15);

    cout<<"Fecha restada"<<endl;
    f2.showDate();
}