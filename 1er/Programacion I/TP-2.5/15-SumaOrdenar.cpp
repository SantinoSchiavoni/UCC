/*
Desarrolle un programa en C++ que recibe como input una matriz cuadrada N de
números enteros y asigne la suma de sus filas en un vector de N posiciones.
Desarrolle una función que verifique si el resultado de la suma del vector es par o
impar, lo imprima en pantalla, y ordene el vector de forma descendente o
ascendente respectivamente.
Utilice sólo funciones y procedimientos de tipo void.
*/

#include <iostream>
using namespace std;


void funcion_suma(int n, int matriz[100][100], int vector[100]){
    int suma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            suma+=matriz[i][j];
        }
        vector[i]=suma;
        suma=0;
    }
    for(int i=0;i<n;i++){
         cout<<vector[i]<<" ";
    }
    cout<<""<<endl;

}

string par_impar(int n, int matriz[100][100], int vector[100]){
    int suma=0, suma_vector=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            suma+=matriz[i][j];
        }
        vector[i]=suma;
        suma=0;
    }
    for(int i=0;i<n;i++){
        suma_vector+=vector[i];
    }
    if(suma_vector%2==0){
        return "Es par";
    }
    else if(suma_vector%2!=0){
        return "Es impar";
    }
}


void burbuja(int n, int vector[100]){
    bool band=0;
    int aux;
    while(band==0){
        band=1;
        for(int i=0;i<n-1;i++){
            if(vector[i]>vector[i+1]){
                aux=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=aux;
                band=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<vector[i]<<" ";
    }
}


int main(){
    int matriz[100][100], n, vector[100];
    cout<<"Ingrese la dimension de la matriz"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<"Ingrese el elemento "<<i+1<<" , "<<j+1<<endl;
          cin>>matriz[i][j];
        }
    }
    funcion_suma(n,matriz,vector);
    cout<<par_impar(n,matriz,vector)<<endl;
    burbuja(n,vector);
    return 0;
}

