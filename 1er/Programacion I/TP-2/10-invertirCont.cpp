/*
Realizar un programa que reciba un valor de tipo entero N y cree un vector de
tamaño N. Luego, completarlo. Posteriormente, invertir su contenido (intercambiando
el primer elemento con el último, el segundo con el penúltimo, etc.) y mostrarlo.
*/

#include<iostream>
using namespace std;

int main(){
    int a[100],b[100],longitud,contador=0;
    cout<<"Ingrese la longitud del vector"<<endl;
    cin>>longitud;
    for(int i=0;i<longitud;i++){
        cout<<"Ingrese el "<<i+1<<" elemento"<<endl;
        cin>>a[i];  
    }
    for(int i=(longitud-1);i>=0;i--){
        b[contador]=a[i];
        contador++;
    }
    for(int i=0;i<longitud;i++){
        cout<<"[ "<<b[i]<<" ]"<<endl;
    }
}