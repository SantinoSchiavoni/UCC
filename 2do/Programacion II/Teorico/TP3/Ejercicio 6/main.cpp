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

int main(){
    int longitud;
    Password p1;
    Password p2(longitud);

    cout<<"Objeto 1"<<endl;
    p1.generarPassword();
    if(p1.esFuerte()){
        cout<<"La contraseña es fuerte"<<endl;
    }else{
        cout<<"La contraseña es debil"<<endl;
    }
    p1.mostrarContrasena();
    p1.mostrarLongitud();
    cout<<"--------------------------------"<<endl;
    cout<<"Objeto 2"<<endl;
    p2.cargarLongitud();
    p2.generarPassword();
    if(p2.esFuerte()){
        cout<<"La contraseña es fuerte"<<endl;
    }else{
        cout<<"La contraseña es debil"<<endl;
    }
    p2.mostrarContrasena();
    p2.mostrarLongitud();

}