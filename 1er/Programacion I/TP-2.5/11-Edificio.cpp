/*
Desarrolle un programa que permita manejar la información de los inquilinos de una
torre de departamentos. La misma posee 20 pisos y cada piso consta de 6
departamentos (filas y columnas respectivamente). Cada valor del arreglo
representa la cantidad de personas que habitan el “i” departamento en el piso “j”. Se
desea saber:
○ Cantidad total de habitantes de la torre.
○ Cantidad promedio de habitantes por piso.
○ Cantidad promedio de habitantes por departamento.
*/
#include <iostream>
using namespace std;

void edificio(float e[20][6]){
float total=0, prom_piso=0, prom_dpto=0;
for(int i=0;i<20;i++){
    for(int j=0;j<6;j++){
        total+=e[i][j];
    }
}
cout<<">Total de Habitantes: "<<total<<endl;
for(int i=0;i<20;i++){
    for(int j=0;j<6;j++){
        prom_piso+=e[i][j];
    }
    cout<<"->Promedio de Habitantes del piso "<<i+1<<" es: "<<prom_piso/6<<endl;
    prom_piso=0;
}
cout<<"-->Promedio de Habitantes por departamento: "<<total/120<<endl;
}


int main(){
float e[20][6];
for(int i=0;i<20;i++){
    for(int j=0;j<6;j++){
        cout<<"Ingrese la cantidad de habitantes del departamento ["<<i<<"]["<<j<<"]"<<endl;
        cin>>e[i][j];
    }
}
edificio(e); 
}