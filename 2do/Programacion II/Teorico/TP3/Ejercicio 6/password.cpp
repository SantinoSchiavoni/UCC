/*
Crear una clase llamada Password que siga las siguientes condiciones: 
 Los  atributos son  longitud y contraseña.  Por  defecto,  la  longitud  será  de  8 
caracteres 
Generar los siguientes constructores: 
 Un constructor por defecto. 
 Un constructor con la longitud pasada como parámetro.  
Generar los siguientes métodos: 
 generarPassword():   genera  la  contraseña  del  objeto  con  la  longitud  que 
corresponda. 
 esFuerte(): devuelve si es fuerte o no. Para que sea fuerte debe tener más de 
2 mayúsculas, más de 1 minúscula y más de 5 números. 
 Método para visualización de la contraseña y la longitud. 
 Método para cargar la longitud. 
Realizar un programa principal que haga uso de la clase.
*/

#include<iostream>
#include "password.h"
using namespace std;

Password::Password(){
    longitud = 8;
}

Password::Password(int l){
    longitud = l;
}

void Password::setLongitud(int l){
    longitud = l;
}

int Password::getLongitud(){
    return longitud;
}

void Password::generarPassword(){
    cout<<"Ingrese la contraseña"<<endl;
    cin>>ws;
    cin.getline(contrasena, longitud);
}

bool Password::esFuerte(){
    int mayusculas = 0;
    int minusculas = 0;
    int numeros = 0;
    for(int i = 0; i < longitud; i++){
        if(contrasena[i] >= 65 && contrasena[i] <= 90){ // Codigo ASCII de las mayusculas
            mayusculas++;
        }
        if(contrasena[i] >= 97 && contrasena[i] <= 122){ // Codigo ASCII de las minusculas
            minusculas++;
        }
        if(contrasena[i] >= 48 && contrasena[i] <= 57){ // Codigo ASCII de los numeros
            numeros++;
        }
    }
    if(mayusculas > 2 && minusculas > 1 && numeros > 5){
        return true;
    }
    return false;
}

void Password::mostrarContrasena(){
    cout<<"La contraseña es: ";
    for(int i = 0; i < longitud; i++){
        cout<<contrasena[i];
    }
    cout<<endl;
}

void Password::mostrarLongitud(){
    cout<<"La longitud es: "<<longitud<<endl;
}

void Password::cargarLongitud(){
    cout<<"Ingrese la longitud"<<endl;
    cin>>longitud;
}

