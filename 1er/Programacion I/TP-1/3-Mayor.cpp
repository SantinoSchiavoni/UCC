/*Desarrolle un programa que implemente una función que reciba 2 parámetros de tipo
float y retorne el mayor de ellos. Luego, imprimir el retorno de esa función.*/

#include<iostream>
using namespace std;

float comparacion(float x, float y){
    if(x>y){
        return x ;
    }
    if(y>x){
        return y ;
    }
    if(x=y){
        cout<<"Ambos numeros son iguales"<<endl;
    }
}

int main(){
    float num1, num2;

    cout<<"Ingrese 2 numeros a comparar"<<endl;
    cout<<"Numero 1: "; cin>>num1;
    cout<<"Numero 2: "; cin>>num2;

    cout<<"el mayor es: "<<comparacion(num1,num2)<<endl;
    return 0;
}