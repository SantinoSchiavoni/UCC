/*
Desarrollar un programa que permita registrar el tamaño de una matriz, cargarla y,
luego, al proporcionar una posición (i, j) de dicha matriz, calcule la suma de los
elementos adyacentes al elemento m(i, j).
*/

#include <iostream>
using namespace std;
bool limites(int m[10][10], int dim_f, int dim_c, int f, int c){
    if(f==-1 || c==-1){
        return false;
    }
    if(f==dim_f || c==dim_c){
        return false;
    }
    return true;
}

int adyacentes(int m[10][10],int dim_f, int dim_c, int f, int c){
    int suma=0;
    for(int i=(f-1);i<(f+2);i++){
        for(int j=(c-1);j<(c+2);j++){
            if(limites(m,dim_f,dim_c,i,j)){
                suma+=m[i][j];
            }

        }
    }
    suma-=m[f][c];
    return suma;
}

int main(){
    int matriz[10][10], dim_f, dim_c, fila, columna;
    cout<<"Ingrese la dimension de la matriz"<<endl;
    cin>>dim_f>>dim_c;
    for(int i=0;i<dim_f;i++){
        for(int j=0;j<dim_c;j++){
            cout<<"Ingrese el elemento "<<i+1<<" , "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<"Ingrese la posicion del elemento"<<endl;
    cout<<"Fila: ";cin>>fila;
    cout<<"Columna: ";cin>>columna;
    cout<<adyacentes(matriz, dim_f, dim_c, fila, columna)<<endl;
    }
    