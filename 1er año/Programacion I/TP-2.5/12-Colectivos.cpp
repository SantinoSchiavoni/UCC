/*
Una empresa de colectivos, posee un total de 12 coches, los cuales pueden trabajar
en cualquiera de las 3 líneas de la empresa. Al finalizar el día el encargado de cada
una de las líneas, pasa un informe sobre lo recaudado por cada uno de los coches
de su respectiva línea. Elaborar un programa que permita:
○ Calcular la recaudación total por línea de colectivo.
○ Calcular la recaudación total por coche.
○ Calcular la recaudación total general.
○ Determinar el coche que más ingresos registró.
*/

#include <iostream>
using namespace std;

void colectivos(int r[3][12]){
int rec_total=0, rec_coche=0, rec_linea=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            rec_total+=r[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            rec_linea+=r[i][j];
        }
    cout<<"La recaudacion total de la linea "<<i+1<<" es: $"<<rec_linea<<endl;
    rec_linea=0;
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<3;j++){
            rec_coche+=r[j][i];
        }
        cout<<"La recaudacion total del coche "<<i+1<<" es: $"<<rec_coche<<endl;
        rec_coche=0;
    }
    cout<<"El total recaudado es: $"<<rec_total<<endl;
}

int main(){
    int recaudacion[3][12];
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            cout<<"Ingrese la recaudacion del colectivo "<<j+1<<" de la linea "<<i+1<<": ";
            cin>>recaudacion[i][j];
        }
    }
    colectivos(recaudacion);
    return 0;
}