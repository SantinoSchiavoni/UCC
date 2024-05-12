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

Cuenta::Cuenta(){

}

Cuenta::Cuenta(int nro, float ti){
    numeroCuenta = nro;
    tasaInteres = ti;
    saldo = 0;
}

void Cuenta::setNumeroCuenta(int nro){
    numeroCuenta=nro;
}

void Cuenta::setSaldo(float s){
    saldo=s;
}

void Cuenta::setTasaInteres(float ti){
    tasaInteres=ti;
}

int Cuenta::getNumeroCuenta(){
    return numeroCuenta;
}

float Cuenta::getSaldo(){
    return saldo;
}

float Cuenta::getTasaInteres(){
    return tasaInteres;
}

void Cuenta::cargarDatos(){
    int nro;
    float ti;
    cout << "Ingrese el numero de cuenta: ";
    cin >> nro;
    setNumeroCuenta(nro);
    cout << "Ingrese la tasa de interes: ";
    cin >> ti;
    setTasaInteres(ti);
}

void Cuenta::mostrarDatos(){
    cout << "Numero de cuenta: " << numeroCuenta << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Tasa de interes: " << tasaInteres << endl;
}   

void Cuenta::deposito(float monto){
    saldo += monto;
    setSaldo(saldo);
}

void Cuenta::extraccion(float monto){
    bool bandera=true;
    do{
        if(saldo >= monto){
            bandera=false;
        }else{
        cout << "Saldo insuficiente" << endl;
        cout<<"Ingrese nuevamente"<<endl;
        cin>>monto;
        }
    }while(bandera);
    saldo -= monto;
    setSaldo(saldo);
}

void Cuenta::acreditarIntereses(){
    saldo += saldo*tasaInteres/100;
    setSaldo(saldo);
}
