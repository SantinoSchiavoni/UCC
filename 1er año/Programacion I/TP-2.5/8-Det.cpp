/*
Desarrollar un programa que permita calcular el determinante de una matriz 2x2,
utilizando una función. El programa principal debe ser capaz de leer los elementos
de la matriz, e imprimir por pantalla, el determinante calculado.
Calcule el determinante de una matriz de 2x2, utilizando una función. El programa
principal debe leer los elementos de la matriz, y mostrar por pantalla el determinante.
*/

#include <iostream>
using namespace std;

int determinante(int matriz[2][2]){
    int det=0;
    det=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
    return det;
}

int main(){
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Ingrese el valor del elemento: ["<<i<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"El determinante de la matriz es: "<<determinante(a)<<endl;
    return 0;
}