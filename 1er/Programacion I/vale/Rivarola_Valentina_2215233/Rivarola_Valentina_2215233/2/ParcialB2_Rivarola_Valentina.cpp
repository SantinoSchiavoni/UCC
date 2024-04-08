#include<iostream>
using namespace std;

void cargar(int M[9][9]){

    int i, j;

    for (i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout << "Ingrese el elemento de la fila "<<i+1<< " y la columna "<<j+1<< ": ";
            cin >>M[i][j];
        }
    }
}

void mostrar(int M[9][9]){
    cout<< "" <<endl;
    cout<<"La matriz formada es: "<<endl;

    int i, j;

    for (i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<""<<endl;
    }
    cout << ""<<endl;
}

void C1 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 1: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C2 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=0;i<3;i++){
        for(j=3;j<6;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 2: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C3 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=0;i<3;i++){
        for(j=6;j<9;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 3: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C4 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=3;i<6;i++){
        for(j=0;j<3;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 4: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C5 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=3;i<6;i++){
        for(j=3;j<6;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 5: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C6 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=3;i<6;i++){
        for(j=6;j<9;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 6: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C7 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=6;i<9;i++){
        for(j=0;j<3;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 7: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C8 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=6;i<9;i++){
        for(j=3;j<6;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 8: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

void C9 (int M[9][9]){
    int i, j, acumulador=0, multiplicacion=1;
    for(i=6;i<9;i++){
        for(j=6;j<9;j++){
            acumulador=acumulador+M[i][j];
            multiplicacion=multiplicacion*M[i][j];
        }
    }
    cout<< "Cuadrante 9: suma "<<acumulador<< " multiplicacion "<< multiplicacion<<endl;
}

int main(){
    int M[9][9];
    cargar(M);
    mostrar(M);
    C1(M);
    C2(M);
    C3(M);
    C4(M);
    C5(M);
    C6(M);
    C7(M);
    C8(M);
    C9(M);
}
