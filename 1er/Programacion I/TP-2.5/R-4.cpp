/*
Una empresa cuenta con 5 sucursales y se dispone del monto mensual vendido por cada una a lo largo del año. 
Para representar dicha información se genera una matriz de 5 columnas
(cada una representa una sucursal) y 12 filas (cada una representa un mes del año). 
Cada valor de la matriz representa el monto vendido por una sucursal en un mes.
Realizar un programa que permita ingresar los datos en la matriz y a continuación obtenga los siguientes resultados:
· El monto total vendido por la empresa durante el año (usar una función).
· El total de ventas de cada sucursal.
· El total de ventas de cada mes.
*/

#include <iostream>
using namespace std;

int total_ventas(int m[12][5]){
    int suma=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<5;j++){ 
            suma+=m[i][j];
        }
    }
    return suma;
}

void ventas_sucursal(int m[12][5]){
    int suma=0;
    for(int j=0;j<5;j++){
        for(int i=0;i<12;i++){
            suma+=m[i][j];
        }
    cout<<"La sucursal "<<j+1<<" vendió un total de: $"<<suma<<endl;
    suma=0;
    }
}

void ventas_mes(int m[12][5]){
    int suma=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<5;j++){
            suma+=m[i][j];
        }
    cout<<"En el mes "<<i+1<<" se vendio un total de: $"<<suma<<endl;
    suma=0;
    }

}

int main(){
    int matriz[12][5];
    for(int i=0;i<12;i++){
        for(int j=0;j<5;j++){
            cout<<"Ingrese las ventas, del mes "<<i+1<<", de la sucursal "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<"El monto total vendido por la empresa durante el año es: $"<<total_ventas(matriz)<<endl;
    ventas_sucursal(matriz);
    ventas_mes(matriz);
    return 0;
}