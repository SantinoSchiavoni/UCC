/*Desarrollar un programa que implemente una función que calcule el factorial de un
número n. Luego que imprima el resultado de dicho retorno.*/

#include<iostream>
using namespace std;

int factorial(float x){ //Funcion para calculo de factorial

float multiplicador, acumulador;

multiplicador=x-1;
acumulador=x;

while (multiplicador!=0) {
    acumulador=(acumulador*multiplicador);
    multiplicador=multiplicador-1;
}
    return acumulador;
}

int main(){ //Funcion Principal
    float num1;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    cout<<"El factorial del numero ingresado es "<<factorial(num1)<<endl;
    return 0;
}