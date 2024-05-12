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

#include<iostream>
using namespace std;

class numero{
    private:
        int numerador,denominador;
    public:
        numero();
        numero(int,int);

        void setNumerador(int);
        void setDenominador(int);

        int getNumerador();
        int getDenominador();

        void showNumero();
        void simplificar();
        numero operator++();
        numero operator--();
        numero operator+(numero);
        numero operator-(numero);
        numero operator+=(int);
        numero operator-=(int);
};