/*
Generar una clase Persona que siga las siguientes condiciones: 
Los atributos son:  
 Nombre 
 Fecha de nacimiento  
 DNI 
 Sexo (H hombre, M mujer) 
 Peso 
 Altura 
Generar los siguientes constructores: 
 Un constructor por defecto. 
 Un constructor con el nombre, edad y sexo, el resto por defecto. 
 Un constructor con todos los atributos como parámetro. 
Definir los métodos para: 
 Carga y muestra de los datos miembro. 
 calcularIMC: calcula el índice de masa corporal como (peso en kg/(altura2  en 
m)),  
 calcularEdad: calcula la edad según la fecha de nacimiento. 
 esMayorDeEdad: indica si es mayor de edad. 
Realizar un programa principal que haga uso de la clase.
*/

#include <iostream>
#include "persona.h"
using namespace std;

int main(){
    char nombre[50];
    int edad;
    char fechaNacimiento[8];
    long dni;
    char sexo;
    float peso;
    float altura;
    Persona p1(nombre, edad, fechaNacimiento, dni, sexo, peso, altura);

    p1.cargarDatos();
    p1.calcularEdad();
    p1.mostrarDatos();

}