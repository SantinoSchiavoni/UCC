/*
Hacer un algoritmo que pida por pantalla el valor de dos numero enteros.
Luego utilizando variables del tipo puntero, los sume y vaya acumulando sus sumas hasta que
el resultado de la suma sea un valor negativo. Al final mostrar el monto acumulado
*/

#include<iostream>
using namespace std;

int main(){
    int numero1, numero2, *pun1, *pun2, suma=0, acum=0;
    bool band=1;

    do{
    suma=0;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    
    pun1=&numero1;
    pun2=&numero2;

    suma= *pun1 + *pun2;
    acum+=suma;
    }while(acum>=0);
    cout<<"La suma es: "<<acum<<endl;
    cout<<"La direccion 1 es: "<<pun1<<endl;
    cout<<"La direccion 2 es: "<<pun2<<endl;

    return 0;
}