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

int main(){

    numero n1,n2,n3;
    int numero1, numero2;
    int numerador, denominador;

    cout<<"Ingresa el numero 1"<<endl;
    cout<<"Numerador: "; cin>>numerador; n1.setNumerador(numerador);
    cout<<"Denominador: "; cin>>denominador; n1.setDenominador(denominador);

    cout<<"Ingresa el numero 2"<<endl;
    cout<<"Numerador: "; cin>>numerador; n2.setNumerador(numerador);
    cout<<"Denominador: "; cin>>denominador; n2.setDenominador(denominador);

    n3=n1+n2;
    n3.showNumero();

    n3=n1-n2;
    n3.showNumero();

    n3=++n1;
    n3.showNumero();

    n3=--n1;
    n3.showNumero();

    cout<<"Ingresa un numero entero: "; cin>>numero1;
    n3+=numero1;
    n3.showNumero();

    cout<<"Ingresa un numero entero: "; cin>>numero2;
    n3-=numero2;
    n3.showNumero();

    return 0;

}