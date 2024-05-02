/*
Escribir un programa que declare e inicialice dos variables enteras y  un puntero a 
entero. A  continuación,  asigne  al  puntero  la  dirección  de  la  primera  variable  e 
imprima  la  dirección  de  memoria  apuntada  y  su  contenido.  Repetir  la  operación 
para la segunda variable
*/

#include<iostream>
using namespace std;

int main(){
    int a=5, b=10;
    int *puntero;

    puntero = &a; //Asigno la direccion de memoria de a al puntero

    cout<<"La direccion de memoria a es: "<< puntero <<endl;
    cout<<"El valor de a es: "<<*puntero<<endl;

    puntero=&b; //Asigno la direccion de memoria de b al puntero

    cout<<"La direccion de memoria b es: "<<puntero<<endl;
    cout<<"El valor de b es: "<<*puntero<<endl;
}