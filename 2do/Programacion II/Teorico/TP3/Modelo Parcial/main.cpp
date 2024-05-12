/*
1) Diseñar una clase que permita representar el estado de un contenedor de material utilizado para la producción de un componente químico. 
Los atributos a considerar son:
->Código de Material, Cantidad de actual, Cantidad Mínima y Cantidad Máxima.
Implementar los siguientes métodos: Constructor, Métodos Set y Get para cada atributo. 
La clase debe permitir: 
a) Inicializar la cantidad de material inicial, minima y máxima. 
b) Realizar depósitos de material 
c) Realizar extracciones de material 
d) Verificar cantidad de material de depósito 
Menú a implementar: 
1_ Crear Depósito 
2_ Agregar material 
3_ Extraer material 
4_ Verificar estado depósito 
5_ Salir 
Las reglas a tener en cuenta son las siguientes: 
1) Al crear el objeto se determinan, los valores Cantidad Actual y Cantidad Máxima deben ser iguales
2) No se puede extraer mas material que el existente. 
3)Antes de realizar la una extracción o agregado de material, se debe verificar el estado del contenedor.
*/

#include <iostream>
#include "material.h"
using namespace std;

void menu(){
    cout<<"bienvenido al menu de inicio"<<endl;
    cout<<"1_ Crear Deposito"<<endl;
    cout<<"2_ Agregar material"<<endl; 
    cout<<"3_ Extraer material"<<endl; 
    cout<<"4_ Verificar estado deposito"<<endl; 
    cout<<"5_ Salir "<<endl;

}

int main(){
    int opcion, codigo=0, actual=0, min=0, max=0, add=0, extract=0;
    bool bandera=1;
    Material m1(codigo,actual,min,max);

    do{
    menu();

    cout<<"Opcion: ";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Ingrese el codigo del material: ";
        cin>>codigo;
        cout<<"Ingrese la cantidad actual: ";
        cin>>actual;
        cout<<"Ingrese la cantidad minima: ";
        cin>>min;
        cout<<"Ingrese la cantidad maxima: ";
        cin>>max;
        cout<<"Deposito creado***"<<endl;
        cout<<"Desea continuar?(1 por si, 0 por no)"<<endl;
        cin>>bandera;
        break;
    case 2:
        cout<<"Ingrese cuanto material desea agregar: ";
        cin>>add;
        m1=m1+add;
        cout<<"Usted tiene "<<m1.getCantidadActual()<<" de material en el deposito"<<endl; //Se agrega para mostrar la cantidad actual de material en el deposito
        cout<<"Desea continuar?(1 por si, 0 por no)"<<endl;
        cin>>bandera;
        break;
    case 3:       
        cout<<"Ingrese cuanto material desea extraer: ";
        cin>>extract;
        m1=m1-extract;
        cout<<"Usted tiene "<<m1.getCantidadActual()<<" de material en el deposito"<<endl; //Se agrega para mostrar la cantidad actual de material en el deposito
        cout<<"Desea continuar?(1 por si, 0 por no)"<<endl;
        cin>>bandera;
        break;
    case 4:
        cout<<"Verificando deposito..."<<endl;
        cout<<""<<endl;
        m1.verificarEstadoDeposito();
        cout<<"Desea continuar?(1 por si, 0 por no)"<<endl;
        cin>>bandera;
        break;
    case 5:
        cout<<"Gracias por usar nuestro servicio"<<endl;
        bandera=0;
        break;
    default:
        bandera=1;
        cout<<"Opcion invalida, vuelva a ingresar nuevamente"<<endl;
        break;
    }

    }while(bandera);

}