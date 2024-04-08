/*
Permite ingresar 12 números por teclado. 
Cuenta la cantidad de veces que se ingresó el cero.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    int contadorCeros = 0;
    float num;
    //logica
    for (int i=1; i <=12; i++){
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
        if(num==0){
            contadorCeros++;
        }
    }
    cout<<"Usted ingreso "<<contadorCeros<<" ceros"<<endl;
    return 0;
}