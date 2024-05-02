/*
Se pide crear un programa que haciendo uso de la reserva dinámica de memoria 
almacene  un  número  determinado  de  valores  (n)  obtenidos  de  forma  aleatoria, 
entre 0 y 100 y los ordene de mayor a menor
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    bool bandera=0;
    int n, aux;
    int *p = new int[n]; //reserva de memoria dinamica

    cout<<"Ingrese la cantidad de elementos ";
    cin>>n;

    for(int i=0;i<n;i++){
        srand(time(NULL));
        p[i] = rand() % 100;
        system("pause"); 
        cout<<"elemento "<<i+1<<": "<<p[i]<<endl;
    }

    while(bandera==0){
        bandera=1;
            for(int j=0;j<n-1;j++){
                if(p[j]>p[j+1]){
                aux = p[j];
                p[j]=p[j+1];
                p[j+1]=aux;
                bandera=0;
            }
        }
    }

    cout<<"-----------------------------"<<endl;
    cout<<"ELEMENTOS ORDENADOS"<<endl;

    for(int i=0;i<n;i++){
        cout<<"elemento "<<i+1<<": "<<p[i]<<endl;
    }

    delete[] p;
}