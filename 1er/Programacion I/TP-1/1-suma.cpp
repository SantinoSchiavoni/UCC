//Desarrolle una función que reciba 2 parámetros de tipo entero y retorne la suma de ellos.

#include<iostream>
using namespace std;

int sumar(int x, int y){
    return x+y;
}

int main(){
    
    int n1, n2;

    cout<<"Ingrese 2 numeros a sumar"<<endl;
    cout<<"1: "; cin>>n1;
    cout<<"2: "; cin>>n2;

    cout<<"El resultado es: "<<sumar(n1,n2)<<endl;
    
    return 0;
}