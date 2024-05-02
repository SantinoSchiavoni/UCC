/*
Escribir un programa que declare un arreglo de 5 enteros, y un puntero a entero. 
Comprobar  que los  elementos  del  arreglo  ocupan posiciones sucesivas en 
memoria, escribiendo sus direcciones
*/

#include<iostream>
using namespace std;

int main(){
    int a[] = {2,4,6,8,10};
    int *puntero;

    for(int i=0;i<5;i++){
        puntero = &a[i]; //Asigno la direccion de memoria de a al puntero
        cout<<"La direccion de memoria es: "<<puntero<<endl;
    }
}