#include<iostream>
using namespace std;

void cargar(int M[4][4]){
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "Ingrese el elemento de la fila "<<i+1<< " y la columna "<<j+1<< ": ";
            cin >>M[i][j];
        }
    }
}

void mostrar(int M[4][4]){
    cout << "La matriz formada es: "<<endl;
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << M[i][j]<<" ";
        }
        cout<<""<<endl;
    }
}

void suma_ts(int M[4][4]){
    int ss=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j>=i){
                ss=ss+M[i][j];
            }
        }
    }
    cout << "La suma de los elementos de la triangular superior es: "<<ss<<endl;
}

void suma_ti(int M[4][4]){
    int si=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>=j){
                si=si+M[i][j];
            }
        }
    }
    cout << "La suma de los elementos de la triangular inferior es: "<<si<<endl;
}

int suma_dp(int M[4][4]) {
    int acumulador=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j)
                acumulador=acumulador+M[i][j];
        }
    }
    return acumulador;
}

int suma_ds(int M[4][4]) {
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
    suma_ts(M);
    suma_ti(M);
    suma_dp(M);
    cout << "La suma de los elementos de la diagonal principal es: "<<sumardiagp(M)<<endl;
    suma_ds(M);
    cout << "La multiplicacion entre los elementos de la diagonal principal y los de la diagonal secundaria es: "<<suma_dp(M)*suma_ds(M)<<endl;
}
