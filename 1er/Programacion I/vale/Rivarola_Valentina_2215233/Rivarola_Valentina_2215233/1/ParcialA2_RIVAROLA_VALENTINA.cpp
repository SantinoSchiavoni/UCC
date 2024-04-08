#include<iostream>
using namespace std;

void cargar(int M[4][4]){
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "ingrese el elemento de la fila "<<i+1<< " y la columna "<<j+1<< ": ";
            cin >>M[i][j];
        }
    }
}

void mostrar(int M[4][4]){
    cout << "la matriz formada es: "<<endl;
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << M[i][j]<<" ";
        }
        cout<<""<<endl;
    }
}

void sumatrians(int M[4][4]){
    int sumas=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j>=i){
                sumas=sumas+M[i][j];
            }
        }
    }
    cout << "la suma de los elementos de la triangular SUPERIOR es: "<<sumas<<endl;
}

void sumatriani(int M[4][4]){
    int sumai=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>=j){
                sumai=sumai+M[i][j];
            }
        }
    }
    cout << "la suma de los elementos de la triangular INFERIOR es: "<<sumai<<endl;
}

int sumardiagp(int M[4][4]) {
    int acum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j)
                acum=acum+M[i][j];
        }
    }
    return acum;
}

int sumardiags(int M[4][4]) {
    int acum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==4-1-j)
                acum=acum+M[i][j];
        }
    }
    return acum;
}

int main(){
    int M[4][4];
    cargar(M);
    mostrar(M);
    sumatrians(M);
    sumatriani(M);
    sumardiagp(M);
    cout << "la suma de los elementos de la DIAGONAL principal es: "<<sumardiagp(M)<<endl;
    sumardiags(M);
    cout << "la multiplicacion entre los elementos de la diagonal principal y los de la diagonal secundaia es: "<<sumardiagp(M)*sumardiags(M)<<endl;
}
