/*
Queremos conocer los gastos de nuestro último viaje. 
Permita al usuario ingresar todos los gastos deseados. 
El programa mostrará la sumatoria de los mismos cuando el usuario ingrese un valor negativo.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    float acumulador=0;
    int gastos=0;
    //Datos
    cout<<"Ingresa los gastos del viaje, ingresa -1 para finalizar"<<endl;
    //Logica
    while(gastos>=0){
        cout<<"Gastos: $ ";cin>>gastos;
        if(gastos>=0){
            acumulador = acumulador + gastos;
        }
    }
    cout<<"El gasto total es: "<<acumulador<<endl;
    return 0;
}