/*
Definir  un  arreglo  unidimensional  de  N  componentes  enteras  de  modo  que  la 
gestión de memoria sea dinámica utilizando new. Ingresar los datos en el vector. 
Mostrar el contenido del vector en dos modos: usando  notación vectorial y luego 
usando aritmética de punteros.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;
    int *p = new int[n]; //reserva de memoria dinamica
    for(int i = 0; i < n; i++){
        cout<<"Ingrese el valor de la posicion "<<i+1<<": ";
        cin>>p[i];
    }
    cout<<"Mostrando el contenido del vector con notacion vectorial: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<p[i]<<" "<<endl;
    }

    cout<<endl<<"Mostrando el contenido del vector con aritmetica de punteros: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<*(p+i)<<" "<<endl; //p+i es equivalente a p[i]
    }

    delete[] p; //liberar memoria

}