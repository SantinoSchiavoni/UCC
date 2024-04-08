/*
Recibir como entrada 2 valores: T y OP. Calcule el resultado de la siguiente función:
1- T/5 si OP=1
T^T si OP =2
6xT/2 si OP = 3 o 4
1 para el resto de casos
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Declarar
    float t, funcion;
    int op;
    //Datos
    cout<<"Ingresa los 2 valores T y OP(Recuerda que OP debe ser entero)"<<endl;
    cout<<"T: "; cin>>t;
    cout<<"OP: "; cin>>op;
    //Logica
    switch(op){
        case 1:
        funcion = t/5;
        cout<<"f(x)= "<<funcion<<endl;
        break;
        case 2:
        funcion = pow(t,t);
        cout<<"f(x)= "<<funcion<<endl;
        break;
        case 3:
        funcion = 6*(t/2);
        cout<<"f(x)= "<<funcion<<endl;
        break;
        case 4:
        funcion = 6*(t/2);
        cout<<"f(x)= "<<funcion<<endl;
        break;
        default:
        funcion = 1;
        cout<<"f(x)= "<<funcion<<endl;
        break;
    }
    return 0;
}