/**
 Se desea calcular el salario neto de un trabajador pidiendo por teclado el legajo, 
 la categoría y la cantidad de horas trabajadas. 
 El valor hora depende de la categoría del trabajador y se detalla a continuación en una tabla. 
 Se debe realizar un descuento del 20% del salario bruto para todas las categorías.
*/

#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    int legajo, categoria;
    float salario, horasT;
    //Datos
    cout<<"Ingresa tu Legajo, tu Categoria y la cant de horas trabajadas"<<endl;
    cout<<"Legajo: "; cin>>legajo;
    cout<<"Categoria: "; cin>>categoria;
    cout<<"Horas Trabajadas: "; cin>>horasT;
    //Logica
    switch(categoria){
        case 1:
            salario = horasT * 10;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 2:
            salario = horasT * 15;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 3:
            salario = horasT * 18;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 4:
            salario = horasT * 22;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 5:
            salario = horasT * 28;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 6:
            salario = horasT * 35;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
        case 7:
            salario = horasT * 49;
            salario *= 0.8;
            cout<<"Tu salario es de: $" << salario <<endl;
        break;
    }
return 0;
}