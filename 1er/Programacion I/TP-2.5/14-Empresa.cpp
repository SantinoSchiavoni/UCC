/*
Una empresa cuenta con 5 sucursales y se dispone del monto mensual vendido por
cada una a lo largo del año. Se representa la información generando una matriz de
sucursales columna y meses fila, donde cada elemento representa el monto vendido
por la “i” sucursal en el “j” mes. Desarrolle un programa que reciba como parámetros
los datos de la matriz y obtenga los siguientes resultados:
○ Total de ventas de la empresa en el año
○ Total de ventas de cada sucursal en el año
○ Total de ventas de cada mes
*/
#include <iostream>
using namespace std;

void empresa(int m[12][5]){
    int total_año=0, total_cSucursal=0, total_cMes=0;
    for(int j=0;j<12;j++){
        for(int i=0;i<5;i++){
            total_cMes+=m[j][i];
            total_año+=m[j][i];
        }
        cout<<"->Total de ventas mes "<<j+1<<": "<<total_cMes<<endl;
        total_cMes=0;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<12;j++){
            total_cSucursal+=m[j][i];
        }
        cout<<"Total de ventas sucursal "<<i+1<<": "<<total_cSucursal<<endl;
        total_cSucursal=0;
    }
    cout<<"-->Total de ventas: "<<total_año<<endl;
}

int main(){
    int matriz[12][5];
    for(int j=0;j<12;j++){
        for(int i=0;i<5;i++){
            cout<<"Ingrese las ventas del mes: "<<j+1<<" , de la sucursal: "<<i+1<<endl;
            cin>>matriz[j][i];
        }
    }
    empresa(matriz);
    return 0;
}