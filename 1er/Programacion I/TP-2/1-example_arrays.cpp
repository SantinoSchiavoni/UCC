/*
Desarrollar un programa que permita crear un arreglo unidimensional de enteros con
un tamaño de 5, ingresar los datos en el arreglo e imprimirlos por pantalla.
*/
#include<iostream>
using namespace std;

int main(){
    int a[5], i;

    for(i=0;i<5;i++){
        cout<<"indique el valor del elemento a["<<i<<"]"<<endl;
        cin>>a[i];
    }
    
    cout<<"  "<<endl;

    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}