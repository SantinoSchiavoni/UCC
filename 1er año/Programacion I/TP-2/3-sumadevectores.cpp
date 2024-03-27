/*
Realizar un programa que reciba un valor de tipo entero N y cree dos arreglos
unidimensionales A y B de tamaño N. Ingresar cada uno de sus elementos.
Desarrolle una función que calcule un arreglo C de tamaño N, donde cada elemento
será el resultado de la suma de los elementos de los vectores A y B en la misma
posición. Imprimir el arreglo C.
*/

#include<iostream>
using namespace std;

int main(){
    int a[100],b[100],c[100],longitud, suma=0;
    
    cout<<"Ingrese la longitud de los arreglos"<<endl;
    cin>>longitud;

    for(int i=0; i<longitud;i++){
        cout<<"indique el valor del elemento a["<<i<<"]"<<endl;
        cin>>a[i];
    }
    for(int i=0; i<longitud;i++){
        cout<<"indique el valor del elemento b["<<i<<"]"<<endl;
        cin>>b[i];
    }
    for(int i=0; i<longitud;i++){
        c[i]=a[i]+b[i];
        cout<<"["<<c[i]<<"]"<<endl;
    }
return 0;
}