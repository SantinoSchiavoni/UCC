/*
Realizar  un  programa  que  rellene  de  forma  aleatoria  con  los  primeros  100 
números un arreglo de 15 elementos. Mostrar por medio de punteros los valores 
en el vector y la dirección de memoria de cada uno
*/

#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
    int a[15];
    int *puntero;
    
    srand(time(NULL));
    
    for(int i=0;i<15;i++){
        a[i] = rand() % 100;
        puntero = &a[i];
    
        cout<<"El valor en el punto "<< i+1 <<" es: "<<*puntero<<endl;
        cout<<"La direccion en el punto "<< i+1 <<" es: "<<puntero<<endl;
        cout<<"----------"<<endl;
        
    }
}
