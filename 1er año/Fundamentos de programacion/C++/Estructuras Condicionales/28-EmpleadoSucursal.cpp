/*
En una empresa necesitan un empleado para una sucursal. 
El empleado debe reunir las siguientes condiciones: 
categoría 3 o 4 con antigüedad mayor a 3 años, 
o bien categoría 2 con antigüedad mayor a 5 años. 
El usuario debe poder ingresar la categoría y la antigüedad, 
y el programa debe responder si la persona reúne las condiciones para el puesto.*/

#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    int categoria, años;
    //Datos
    cout<<"Ingresa la categoria y la antiguedad en la empresa"<<endl;
    cout<<"Categoria: "; cin>>categoria;
    cout<<"Antiguedad: ", cin>>años;
    //Logica
    switch(categoria){
        case 2:
            if(años>5){
                cout<<"Reune las condiciones para el puesto"<<endl;
            } else {
                cout<<"No reune las condiciones para el puesto"<<endl;
            }
        break;
        case 3:
            if(años>3){
                cout<<"Reune las condiciones para el puesto"<<endl;
            } else {
                cout<<"No reune las condiciones para el puesto"<<endl;
            }
        break;
        case 4:
            if(años>3){
                cout<<"Reune las condiciones para el puesto"<<endl;
            } else {
                cout<<"No reune las condiciones para el puesto"<<endl;
            }
        break;
        default:
        cout<<"No reune ninguna de las condiciones para el puesto"<<endl;
        break;
    }
    return 0;
}