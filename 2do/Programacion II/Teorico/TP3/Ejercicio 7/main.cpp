/*
Obtener  una  clase  que  represente una  cuenta  bancaria.  Para  la  misma  se  tiene 
como información: 
 Número de cuenta. 
 Saldo. 
 Tasa de interés 
Definir los datos miembro de la clase. 
Obtener los métodos para: 
 Crear una cuenta nueva (constructor) a partir de la  asignación del número 
de cuenta y una tasa de interés. Toda nueva cuenta se crea con saldo 0. 
 Carga y visualización de los datos miembro. 
 Realizar un depósito. 
 Realizar una extracción. 
 Acreditar intereses. 
Considerar que algunas operaciones requieren comprobación antes de ser 
realizadas 
Definir un programa principal que gestione dos cuentas distintas.  
*/

#include<iostream>
#include "cuenta.h"
using namespace std;

int main(){
    int nro;
    float ti;
    Cuenta cuenta1(nro,ti);
    Cuenta cuenta2(nro,ti);

    cout<<"****Cuenta 1****"<<endl;
    cout<<""<<endl;
    cuenta1.cargarDatos();
    cuenta1.mostrarDatos();
    cout<<""<<endl;
    cout<<"****Cuenta 2****"<<endl;
    cuenta2.cargarDatos();
    cuenta2.mostrarDatos();
    cout<<"-------------------"<<endl;
    cout<<""<<endl;

    cout<<"Deposito en cuenta 1"<<endl;
    cout<<"Ingrese monto a depositar: ";cin>>nro;
    cuenta1.deposito(nro);
    cuenta1.mostrarDatos();
    cout<<""<<endl;

    cout<<"Deposito en cuenta 2"<<endl;
    cout<<"Ingrese monto a depositar: ";cin>>nro;
    cuenta2.deposito(nro);
    cuenta2.mostrarDatos();
    cout<<""<<endl;

    cout<<"Extraccion en cuenta 1"<<endl;
    cout<<"Ingrese monto a extraer: ";cin>>nro;
    cuenta1.extraccion(nro);
    cuenta1.mostrarDatos();
    cout<<""<<endl;

    cout<<"Extraccion en cuenta 2"<<endl;
    cout<<"Ingrese monto a extraer: ";cin>>nro;
    cuenta2.extraccion(nro);
    cuenta2.mostrarDatos();
    cout<<""<<endl;

    cout<<"Acreditar intereses en cuenta 1"<<endl;
    cuenta1.acreditarIntereses();
    cuenta1.mostrarDatos();
    cout<<""<<endl;

    cout<<"Acreditar intereses en cuenta 2"<<endl;
    cuenta2.acreditarIntereses();
    cuenta2.mostrarDatos();

}