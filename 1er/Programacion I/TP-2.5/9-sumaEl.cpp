/*
Elaborar un programa que permita ingresar un valor N, para crear una matriz
cuadrada de orden N. A continuación, se deben ingresar los elementos de esta
matriz uno por uno. Luego, desarrollar una función que calcule la diferencia entre la
suma de los valores superiores a la diagonal, y la suma de los valores inferiores a la
diagonal principal.
*/

#include <iostream>
using namespace std;

int funcion(int a[100][100], int n){
    int sumaSup=0;
    int sumaInf=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                sumaInf=sumaInf+a[i][j];
            }
            if(j>i){
                sumaSup=sumaSup+a[i][j];
            }
        }
    }
    return sumaSup-sumaInf;
}

int main(){
    int dimension;
    int matriz[100][100];
    cout<<"Ingrese la dimension de la matriz: "<<endl;
    cin>>dimension;
    for(int i=0;i<dimension;i++){
        for(int j=0;j<dimension;j++){
            cout<<"Ingrese el valor del elemento: ["<<i<<j<<"]"<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<funcion(matriz,dimension)<<endl;
    return 0;
}