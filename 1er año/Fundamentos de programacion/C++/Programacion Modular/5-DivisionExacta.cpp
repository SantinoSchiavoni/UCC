/*
Escriba una función que reciba de argumento 2 números enteros, 
y devuelva true si la división es exacta, o false si no lo es.*/

#include<iostream>
using namespace std;

bool funcion(int num1, int num2){
    if(num1 % num2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num3, num4;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>num3;
    cin>>num4;
    cout<<"La division, es exacta? "<<funcion(num3,num4)<<endl;
    return 0;
}