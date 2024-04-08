/*
Desarrollar un programa que permita registrar el tamaño de una matriz, cargarla y,
luego, al proporcionar una posición (i, j) de dicha matriz, calcule la suma de los
elementos adyacentes al elemento m(i, j).
*/

#include <iostream>
using namespace std;

bool limites(int dim_f, int dim_c, int f, int c, int matriz[100][100]){
    if(f<0 || c<0){
        return false;
    }
    if(f>dim_f || c>dim_c){
        return false;
    }
    return true;
}

int suma(int dim_f, int dim_c, int pos_f, int pos_c, int matriz[100][100]){
    int suma=0;
    for(int i=pos_f-1;i<pos_f+2;i++){
        for(int j=pos_c-1;j<pos_c+2;j++){
            if(limites(dim_f,dim_c,i,j,matriz)){
                suma+=matriz[i][j];
            }
        }
    }
    suma-=matriz[pos_f][pos_c];
    return suma;
}

int main(){
    int dim_f, dim_c, pos_f, pos_c, matriz[100][100];
    cout<<"Ingrese las dimensiones de la matriz"<<endl;
    cout<<"Filas: ";cin>>dim_f;
    cout<<"Columnas: ";cin>>dim_c;
    for(int i=0;i<dim_f;i++){
        for(int j=0;j<dim_c;j++){
            cout<<"Ingrese el elemento "<<i+1<<" , "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<"Proporcione la posicion"<<endl;
    cout<<"Filas: ";cin>>pos_f;
    cout<<"Columnas: ";cin>>pos_c;
    cout<<"-------------"<<endl;
    cout<<"La suma es: "<<suma(dim_f,dim_c,pos_f,pos_c,matriz)<<endl;
    return 0;
}