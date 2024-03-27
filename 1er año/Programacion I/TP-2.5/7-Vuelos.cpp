/*
En un aeropuerto la información sobre los vuelos se registra en arreglos paralelos
del siguiente modo:
○ Un arreglo para el número de vuelo.
○ Un segundo arreglo de enteros para la cantidad de pasajeros que transporta.
○ Un tercer arreglo para el estado: 1 = en horario o 0 = retrasado.
Obtener un programa que solicite la cantidad de aviones del día y permita ingresar la
información de estos en el formato antes especificado. El programa deberá calcular:
● Cantidad de vuelos retrasados.
● El porcentaje de vuelos retrasados con respecto al total.
● La cantidad total de pasajeros por día
*/

#include <iostream>
using namespace std;

void aviones(float cA, int num[], int pasaj[], bool state[]){
    float retrasados=0, porc_vr, cTotal=0;
    for(int i=0;i<cA;i++){
        if(state[i]==false){
            retrasados++;
        }
        cTotal+=pasaj[i];
    }
    porc_vr=(retrasados/cA)*100;
    cout<<"La cantidad de vuelos retrasados son: "<<retrasados<<endl;
    cout<<"El porcentaje de vuelos atrasados es: "<<porc_vr<<"%"<<endl;
    cout<<"La cant de pasajeros total es: "<<cTotal<<endl;
}

int main(){
    int num_vuelo[100], cant_pasajeros[100];
    float cant_aviones;
    bool estado[100];
    cout<<"Ingrese la cantidad de aviones del dia"<<endl;
    cin>>cant_aviones;
    for(int i=0;i<cant_aviones;i++){
        cout<<"Ingrese el numero del "<<i+1<<" vuelo: ";cin>>num_vuelo[i];
        cout<<"Ingrese la cantidad de pasajeros del "<<i+1<<" vuelo: ";cin>>cant_pasajeros[i];
        cout<<"Ingrese el estado del "<<i+1<<" vuelo: ";cin>>estado[i];
    }
    aviones(cant_aviones, num_vuelo, cant_pasajeros, estado);
    return 0;
}