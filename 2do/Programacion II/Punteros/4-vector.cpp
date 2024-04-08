/*
Rellenar un vector de 10 numeros, posteriormente utilizando punteros
indicar cuales son pares y su posicion de memoria
*/

#include<iostream>
using namespace std;

int main(){
    int a[10];
    int *puntero;

    for(int i=0;i<10;i++){
        cout<<"Ingrese el numero "<<i+1<<endl;
        cin>>a[i];
    }

    puntero=&a[0];

    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            cout<<"El numero "<<*puntero<<" es par"<<endl;
            cout<<"La direccion de memoria es "<<puntero<<endl;
        }
        puntero++;
    }
    return 0;
}