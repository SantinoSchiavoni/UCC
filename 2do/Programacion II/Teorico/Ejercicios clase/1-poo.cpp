/*
Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular y cantidad
(puede tener decimales).
El titular será obligatorio y la cantidad es opcional. Crea dos constructores que cumplan con
la restricción planteada.
Crear los métodos get, set.
Tendrá dos métodos especiales:
● ingresar(double cantidad): se ingresa una cantidad a la cuenta, si la cantidad
introducida es negativa, no se hará nada.
● retirar(double cantidad): se retira una cantidad a la cuenta, si restando la cantidad
actual a la que nos pasan es negativa, la cantidad de la cuenta pasa a ser 0.
 */

#include<iostream>
using namespace std;

class cuenta{ //Clase Cuenta
private:
    string titular;
    float cantidad;
public:
    cuenta(string nt); //Constructor con un solo parametro
    void setTitular(string nt); //Metodo set
    void setCantidad(int c); //Metodo set
    string getTitular(); //Metodo get
    float getCantidad(); //Metodo get
    void ingresar(float monto); //Metodo ingresar
    void retirar(float monto); //Metodo retirar
    ~cuenta(); //Destructor
};

void cuenta::setTitular(string nt){ //Metodo set
    titular = nt;
}

float cuenta::getCantidad(){ //Metodo set
    return cantidad;
}

cuenta::cuenta(string nt){ //Constructor con un solo parametro
    titular = nt;
}

void cuenta::ingresar(float monto){ //Metodo ingresar
    cantidad += monto;
}

void cuenta::retirar(float monto){ //Metodo retirar

    cantidad-=monto;
    if(cantidad<0){
        cantidad = 0;
    }
}

