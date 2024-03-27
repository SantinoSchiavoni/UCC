/*
Implementar una funcion que, dada una matriz m y una posicion (i,j), calcule la suma de elementos adyacentes al elemento m(i,j)
*/

#include <iostream>
using namespace std;

int sumaAdy(int m[100][100], int pos_x, int pos_y, int x, int y){
    int suma=0;
    for(int i=pos_x-1; i<=pos_x+1; i++){
        for(int j=pos_y-1; j<=pos_y+1; j++){
            if(i==pos_x && j==pos_y) continue; //Para no sumar el elemento en la posicion (x,y
            if(i>=0 && j>=0 && i<=x && j<=y){
                suma+=m[i][j];
            }
            else{
                suma+=0;
            }
        }
    }
    return suma;
}

void matriz(int m[100][100], int pos_x, int pos_y, int x, int y){
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>x>>y;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "Ingrese el valor de la matriz en la posicion (" << i << "," << j << "): ";
            cin >> m[i][j];
        }
    }
    cout<<"Ingrese la posicion (x,y) a calcular la suma de los elementos adyacentes: "<<endl;
    cin>>pos_x>>pos_y;

    cout<<"La suma de los elementos adyacentes es: "<<sumaAdy(m,pos_x,pos_y,x,y)<<endl;
}

int main(){
    int m[100][100], x, y, pos_x, pos_y;
    matriz(m, pos_x, pos_y, x, y);
    return 0;
}