/*
Realizar una clase que permita representar un número racional.  
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir uno o más constructores para inicializar los datos miembro. 
 Definir sobrecargas de los siguientes operadores: 
o + suma 2 racionales generando otro como resultado. 
o – resta 2 racionales generando otro como resultado. 
o ++ incrementa en 1 un racional 
o –– decrementa en 1 un racional. 
o +=suma un entero a un racional. 
o –=suma un entero a un racional 
 Definir además una función miembro que implemente la simplificación del 
racional. 
 Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>
#include "numero.h"
using namespace std;

numero::numero(){
    numerador=4;
    denominador=5;
}

numero::numero(int num, int den){
    numerador=num;
    denominador=den;
}

void numero::setNumerador(int num){
    numerador=num;
}

void numero::setDenominador(int den){
    denominador=den;
}

int numero::getNumerador(){
    return numerador;
}

int numero::getDenominador(){
    return denominador;
}

void numero::showNumero(){
    cout<<numerador<<"/"<<denominador<<endl;
}

void numero::simplificar(){
    int i=2;
    while(i<=numerador && i<=denominador){ //Mientras i sea menor o igual al numerador y al denominador
        if(numerador%i==0 && denominador%i==0){ //Si el numerador y el denominador son divisibles por i
            numerador/=i; //Divido el numerador por i
            denominador/=i; //Divido el denominador por i
        }else{
            i++; //Incremento i, porque?  porque si no se cumple la condicion del if, i no es divisor de ambos, entonces incremento i
        }
    }
}

numero numero::operator++(){
    numerador+=1;
    return *this;
}

numero numero::operator--(){
    numerador-=2;
    return *this;
}

numero numero::operator+(numero n){
    numero aux;
    int mcm=denominador*n.denominador;
    aux.numerador=numerador*(mcm/denominador)+n.numerador*(mcm/n.denominador);
    aux.denominador=mcm;
    aux.simplificar();
    return aux;
}

numero numero::operator-(numero n){
    numero aux;
    int mcm=denominador*n.denominador;
    aux.numerador=numerador*(mcm/denominador)-n.numerador*(mcm/n.denominador);
    aux.denominador=mcm;
    aux.simplificar();
    return aux;
}

numero numero::operator+=(int n){
    numerador+=n*denominador;
    return *this;
}

numero numero::operator-=(int n){
    numerador-=n*denominador;
    return *this;
}



