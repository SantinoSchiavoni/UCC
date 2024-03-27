/*
Obtener una funcion recursiva que calcule el factorial de un numero N
*/

#include<iostream>
#include<cmath>
using namespace std;

int factorial(int x, int resultado){
    resultado=1;
    for(int i=1;i<=x;i++){
        resultado = resultado * i;
    }
    return resultado;
}

void funcion(int x, int resultado){
    cout<<"Ingrese el numero a calcular fatorial"<<endl;
    cin>>x;
    cout<<"El factorial es: "<<factorial(x,resultado)<<endl;
}

int main(){
    int x, resultado;
    funcion(x,resultado);
    return 0;
}