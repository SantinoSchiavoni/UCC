/*
Realizar una clase que permita representar un punto en coordenadas 
cartesianas. 
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir un constructor que inicializa el punto en el origen de coordenadas. 
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas 
coordenadas. 
 Idem para el operador --. 
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y 
otra para sumar a un punto un valor entero. 
 Idem para el operador -. 
 Definir la/las función/es miembro para obtener la  conversión en coordenadas 
polares. 
 Realizar un programa principal que haga uso de la clase.
*/

#include<iostream>
#include "punto.h"
using namespace std;

int main(){
    int num1, num2,opcion;
    Coordenada punto1, punto2;

    cout<<"Punto 1"<<endl;
    punto1.cargarDatos();

    cout<<"Cargar punto 2"<<endl;
    punto2.cargarDatos();

    cout<<"1. Incrementar punto 1"<<endl;
    cout<<"2. Decrementar punto 1"<<endl;
    cout<<"3. Sumar punto 1 y punto 2"<<endl;
    cout<<"4. Restar punto 1 y punto 2"<<endl;
    cout<<"5. Sumar un numero a punto 1"<<endl;
    cout<<"6. Restar un numero a punto 1"<<endl;
    cout<<"7. Convertir a coordenadas polares"<<endl;

    cout<<"Ingrese una opcion: ";
    cin>>opcion;

    switch (opcion){
        case 1:
            punto1.operator++();
            punto1.mostrarDatos();
        break;
        case 2:
            punto1.operator--();
            punto1.mostrarDatos();
        break;
        case 3:
            punto1.operator+(punto2);
            punto1.mostrarDatos();
        break;
        case 4:
            punto1.operator-(punto2);
            punto1.mostrarDatos();
        break;
        case 5:
            cout<<"Ingrese un numero: ";
            cin>>num1;
            punto1.operator+(num1);
            punto1.mostrarDatos();
        break;
        case 6:
            cout<<"Ingrese un numero: ";
            cin>>num2;
            punto1.operator-(num2);
            punto1.mostrarDatos();
        break;
        case 7:
           cout<<punto1.converPolarMagnitud(punto1.getX(), punto1.getY())<<endl;
            cout<<punto1.converPolarAngulo(punto1.getX(),punto1.getY())<<endl;
   default:
    break;
   }
}