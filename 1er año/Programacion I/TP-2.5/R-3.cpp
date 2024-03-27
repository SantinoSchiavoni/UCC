/*
En un aeropuerto la información sobre los vuelos se registra en arreglos paralelos del siguiente modo:
Un arreglo de enteros para el numero de vuelo.
Un segundo arreglo de enteros para la cantidad de pasajeros que transporta.
Un tercer arreglo de enteros para el estado: 1=en horario o 0=retrasado.
Obtener un programa que solicite la cantidad de aviones del dia y 
permita ingresar la información de estos en el formato antes especificado.
El programa deberá calcular:
 Cantidad de vuelos retrasados y % sobre el total de vuelos.
 El vuelo con mayor número de pasajeros.
 El numero promedio de pasajeros del día
*/

#include <iostream>
using namespace std;


int vuelos_retrasados(int n, bool e[100]){
    int retrasados=0;
    for(int i=0;i<n;i++){
        if(e[i]==0){
            retrasados++;
        }
    }
    return retrasados;
}

int porcentaje_vuelosRet(int n, bool e[100]){
    int porcentaje;
    int retr=0;
    for(int i=0;i<n;i++){
        if(e[i]==0){
            retr++;
        }
    }
    porcentaje=(retr/n)*100;
    return porcentaje;
}

int vuelo_mayor(int n, int nV[100], int nP[100]){
    int vuelo_max=0, n_vuelomax=0;
    for(int i=0;i<n;i++){
        if(nP[i]>vuelo_max){
            vuelo_max=nP[i];
            n_vuelomax=nV[i];
        }
    }
    return n_vuelomax;
}

int promedio_pasajeros(int n,int nP[100]){
    int promedio=0, suma=0;
    for(int i=0;i<n;i++){
        suma+=nP[i];
    }
    promedio=suma/n;
    return promedio;
}

int main(){
    int n, nV[100], nP[100];
    bool e[100];

    cout<<"Ingrese la cantidad de aviones"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el numero del vuelo "<<i+1<<endl;
        cin>>nV[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Ingrese la cant de pasajeros del vuelo "<<i+1<<endl;
        cin>>nP[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Ingrese el estado del vuelo "<<i+1<<endl;
        cin>>e[i];
    }

    cout<<"Cantidad de vuelos retrasados: "<<vuelos_retrasados(n,e)<<endl;
    cout<<"% sobre el total de vuelos: "<<porcentaje_vuelosRet(n,e)<<endl;
    cout<<"Vuelo con mayor n de pasajeros: "<<vuelo_mayor(n,nV,nP)<<endl;
    cout<<"Promedio de pasajeros: "<<promedio_pasajeros(n,nP)<<endl;
    return 0;
}