/*
2. Escribir un programa que declare un arreglo de 5 enteros, y un puntero a entero. 
Comprobar  que los  elementos  del  arreglo  ocupan posiciones sucesivas en 
memoria, escribiendo sus direcciones. 
 
3. Para  el  arreglo  del  ejercicio  anterior,  declare  dos  punteros  a  entero  y  asigneles 
las  direcciones  del  primer  y  último  elemento del  arreglo.  Imprima  la  diferencia 
entre ambos punteros.
*/

#include<iostream>
using namespace std;

int main(){
    int a[]={3,5,7,9,12};
    int *puntero1, *puntero2;

    puntero1 = &a[0];
    puntero2 = &a[4];

    cout<<"El primer elemento es: "<<*puntero1<<endl;
    cout<<"La direccion de memoria del primer elemento es: "<<puntero1<<endl;
    cout<<"El ultimo elemento es: "<<*puntero2<<endl;
    cout<<"La direccion de memoria del ultimo elemento es: "<<puntero2<<endl;

}