/*
Una matriz mágica es una matriz cuadrada (tiene igual número de filas que de
columnas) que tiene como propiedad especial que la suma de las filas, las columnas
y las diagonales es igual. Construir un algoritmo que compruebe si una matriz de
datos enteros es mágica o no (ingresar el orden de la matriz).
*/

#include <iostream>
using namespace std;

bool magica(int a[100][100],int n){
    int suma_fila=0,suma_columna=0,suma_diagonalP=0,suma_diagonalS=0;
    for(int i=0;i<n;i++){
        suma_diagonalP+=a[i][i];
    }
    for(int i=0;i<n;i++){
        suma_diagonalS+=a[i][n-1-i];
    }
    if(suma_diagonalP!=suma_diagonalS){ //Ver suma diagonal, da error aca
        return false;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            suma_fila+=a[i][j];
            suma_columna+=a[j][i];
        }
        if(suma_fila!=suma_diagonalP || suma_columna!=suma_diagonalP){
            return false;
        }
    }
    return true;
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
    if(magica(matriz,dimension)){
        cout<<"La matriz es magica"<<endl;
    }else{
        cout<<"La matriz no es magica"<<endl;
    }
}