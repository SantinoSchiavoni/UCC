/*
Permita leer un número desde el teclado 
y determinar si es positivo, negativo o cero.*/

#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    float numero;
    //Datos
    cout<<"Ingresa el numero"<<endl;
    cin>>numero;
    //Logica
    if(numero>0){
        cout<<"El numero es positivo"<<endl;
    } else if(numero<0){
        cout<<"El numero es negativo"<<endl;
    } else {
        cout<<"El numero es cero"<<endl;
    }
    return 0;
}