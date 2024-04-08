/*
Determinar si un numero es primo o no; 
con puntero y ademas indicar en q posicion de memoria se guardó el numero
*/

#include<iostream>
using namespace std;

int main(){
    int numero, *puntero;
    int contador=0;

    cout<<"Ingrese el numero"<<endl;
    cin>>numero;
    puntero = &numero;

    for(int i=1;i<=*puntero;i++){
        if(*puntero%i==0){
            contador++;
        }
    }
    if(contador==2){
        cout<<"Es primo"<<endl;
        cout<<"La direccion de memoria es "<<puntero<<endl;
    }
    if(contador>2){
        cout<<"No es primo"<<endl;
        cout<<"La direccion de memoria es "<<puntero<<endl;
    }
    return 0;
}