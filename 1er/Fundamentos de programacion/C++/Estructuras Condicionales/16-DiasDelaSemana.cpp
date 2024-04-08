/**
 * Diseñe un algoritmo que escriba los nombres de los días de la semana en función del valor 
 * ingresado por teclado (1 a 7) que representa su posición dentro de la semana. (1=Lunes).
*/

#include<iostream>
using namespace std;

int main() {
    //Declarar variables
    int dia;
    //Datos
    cout <<"Ingresa un numero por teclado del 1 al 7" <<endl;
    cin>>dia;
    //Logica
    switch(dia){
        case 1:
        cout<<"Lunes"<<endl;
        break;
        case 2:
        cout<<"Martes"<<endl;
        break;
        case 3:
        cout<<"Miercoles"<<endl;
        break;
        case 4:
        cout<<"Jueves"<<endl;
        break;
        case 5:
        cout<<"Viernes"<<endl;
        break;
        case 6:
        cout<<"Sabado"<<endl;
        break;
        case 7:
        cout<<"Domingo"<<endl;
        break;
    }
    return 0;
}