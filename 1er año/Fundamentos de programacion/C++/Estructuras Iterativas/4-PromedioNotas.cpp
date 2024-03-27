/*
Permita al usuario ingresar cualquier cantidad de notas. 
El proceso finalizará cuando se ingrese un ‘0’. 
Posteriormente, calculará el promedio de las notas.
*/
#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    float acumulador=0;
    float contador=0;
    int nota=1;
    float promedio;
    //Datos
    cout<<"Ingresa tus notas, ingrese 0 para finalizar"<<endl;
    while(nota>0){
        cout<<"Nota: "; cin>>nota;
        if(nota>0){
            contador++;
            acumulador=acumulador+nota;
        }
    }
    promedio = acumulador/contador;
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;
}