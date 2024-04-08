/*
Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector
*/

#include<iostream>
using namespace std;

int main(){
    int a[100], n, *puntero,menor;

    cout<<"Ingrese el tamaño del vector"<<endl;
    cin>>n;

    puntero=&a[0];

    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<endl;
        cin>>a[i];
    }

    for(int i=0;i<n;i++){

    }

    cout<<"El menor elemento es "<<puntero<<endl;

}
