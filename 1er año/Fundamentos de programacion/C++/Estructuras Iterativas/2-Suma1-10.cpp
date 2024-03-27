/*
Realice la sumatoria de los números enteros comprendidos entre el 1 al 10.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    int acumulador = 0;
    int i;
    //Logica
    for(i=1; i<=10; i++){
    acumulador = acumulador + i;
    }
    //Mostrar
    cout<<"La suma es de: "<<acumulador<<endl;
    return 0;
}