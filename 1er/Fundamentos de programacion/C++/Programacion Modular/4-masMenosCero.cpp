/*
Escriba una función que tenga un argumento de tipo entero, 
y que devuelva la letra P, si es positivo, N si es negativo y C si es cero.*/
#include<iostream>
using namespace std;

char funcion(int num1){
    if(num1>0){
        return 'P';
    }else if(num1<0){
        return  'N';
    } else{
        return 'C';
    }
}

int main(){
    int num2;
    cout<<"Ingresa un numero"<<endl;
    cin>>num2;
    cout<<"Su numero es: "<<funcion(num2)<<endl;
    return 0;
}