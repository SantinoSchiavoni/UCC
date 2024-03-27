/*
El costo de las llamadas telefónicas internacionales depende de la zona geográfica 
en la que se encuentra el país destino y el número de minutos hablados. 
El usuario debe poder ingresar la clave de la zona y el número de minutos. 
Se debe mostrar por pantalla el monto a abonar por la realización de esa llamada.
*/

#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    int clave, minutos;
    float monto;
    //Datos
    cout<<"Ingrese la clave de la zona y el total de minutos en llamada"<<endl;
    cout<<"clave: "; cin>>clave;
    cout<<"Minutos: "; cin>>minutos;
    //Logica
    switch(clave){
        case 12:
        monto = 2 * minutos;
        cout<<"Usted deberá abonar: $"<<monto<<endl;
        break;
        case 15:
        monto = 2.2 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
        case 18:
        monto = 4.5 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
        case 19:
        monto = 3.5 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
        case 23:
        monto = 6 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
        case 25:
        monto = 6 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
        case 29:
        monto = 5 * minutos;
        cout<<"Usted debera abonar: $"<<monto<<endl;
        break;
    }
    return 0;
}