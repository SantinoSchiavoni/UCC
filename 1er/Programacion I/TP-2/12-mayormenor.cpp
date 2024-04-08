/*
Leer los N elementos de un vector y ordenarlo de mayor a menor mediante
funciones que implementan diferentes algoritmos de ordenación (burbuja, burbuja
mejorada).
*/

#include<iostream>
using namespace std;

void ordenar(int x[], int n){
    bool bandera=0;
    int aux;
    while(bandera==0){
        bandera=1;
        for(int j=0;j<n-1;j++){
                
                if(x[j]>x[j+1]){
               
                aux = x[j];
                x[j]=x[j+1];
                x[j+1]=aux;
                bandera=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    }
}


int main(){
    int A[100],i,n;
    cout<<"Ingrese la longitud del vector"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<endl;
        cin>>A[i];
    }
    cout<<"----------"<<endl;
    ordenar(A,n);
}