/*Escriba una función que reciba de parámetro un número entero, y devuelva el cuadrado del mismo*/

#include<iostream>
#include<cmath>
using namespace std;

float cuadrado(float num1, float num2=2){
    float cuad;
    cuad = pow(num1,num2);
    return cuad;
}

int main(){
    float numIng;
    cout<<"Ingrese un numero"<<endl;
    cin>>numIng;
    cout<<"El cuadrado es: "<<cuadrado(numIng,2)<<endl;
    return 0;
}