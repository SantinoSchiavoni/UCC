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

fecha::fecha (){
    day = 1;
    month = 1;
    year = 1900;
}

fecha::fecha(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void fecha::setDay(int d){
    day = d;
}

void fecha::setMonth(int m){
    month = m;
}

void fecha::setYear(int y){
    year = y;
}

int fecha::getDay(){
    return day;
}

int fecha::getMonth(){
    return month;
}

int fecha::getYear(){
    return year;
}

void fecha::showDate(){
    cout << day << "/" << month << "/" << year << endl;
}

fecha fecha::operator++(){
    day++;
    if(day > 31){
        day = 1;
        month++;
        if(month > 12){
            month = 1;
            year++;
        }
    }
    return *this; //Retorna el objeto actual, es decir, la fecha actualizada
}

fecha fecha::operator--(){
    day--;
    if(day<1){
        day=31;
        month--;
        if(month<1){
            month = 12;
            year--;
        }
    }
    return *this;
}

fecha fecha::operator+(int days){
    day += days;
    if(day > 31){
        day = 1;
        month++;
        if(month > 12){
            month = 1;
            year++;
        }
    }
    return *this;
}

fecha fecha::operator-(int days){
    day -= days;
    if(day<1){
        day=31;
        month--;
        if(month<1){
            month = 12;
            year--;
        }
    }
    return *this;
}
