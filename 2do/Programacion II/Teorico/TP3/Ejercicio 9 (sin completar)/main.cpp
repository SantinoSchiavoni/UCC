/*
Construir una clase que permita representar un arreglo unidimensional de 
enteros. Obtener las siguientes sobrecargas: 
 Operador + para sumar dos arreglos. 
 Operador – para restar dos arreglos. 
 Operador * para calcular el producto escalar de 2 arreglos. 
 Operador [] para subindicar los elementos del arreglo. 
Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    int n;
    int a[n];
    int b[n];

    cout << "Ingrese la cantidad de elementos de los arreglos: ";
    cin >> n;

    cout << "Ingrese los elementos del arreglo a: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "Ingrese los elementos del arreglo b: ";
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    Arreglo arregloA(a[n],n);
    Arreglo arregloB(b[n],n);

    Arreglo suma = arregloA + arregloB;
    cout<<"La suma es: "<<(suma.getArreglo())<<endl;
    Arreglo resta = arregloA - arregloB;
    cout<<"La resta es: "<<(resta.getArreglo())<<endl;
    Arreglo producto = arregloA * arregloB;
    cout<<"El producto es: "<<(producto.getArreglo())<<endl;
}