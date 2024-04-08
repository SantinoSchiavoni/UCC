/*
Desarrolle un programa que reciba como parámetros cinco números enteros, los
almacene en un arreglo y calcule la media aritmética de esos números. Imprimir el
arreglo y la media.
*/

#include<iostream>
using namespace std;

int main(){
    float a[5],suma, media;
    for(int i=0;i<5;i++){
        cout<<"Ingrese el "<<i+1<<" numero"<<endl;
        cin>>a[i];
        suma += a[i];
    }
    media = suma/5;
    cout<<"La media es: "<<media<<endl;
    return 0;
}