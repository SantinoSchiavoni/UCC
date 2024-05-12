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
#include <string.h>
#include<cstdlib>
using namespace std;

Persona::Persona(){
    strcpy(nombre, ""); 
    strcpy(fechaNacimiento, "");
    dni = 0;
    sexo = 'H';
    peso = 0;
    altura = 0;
    edad = 0;
}

Persona::Persona(char n[50], int e, char s){
    strcpy(nombre, n);
    strcpy(fechaNacimiento, " ");
    edad=e;
    dni = 0;
    sexo = s;
    peso = 0;
    altura = 0;
}

Persona::Persona(char n[50], int e, char f[8], long d, char s, float p, float a){
    strcpy(nombre, n);
    strcpy(fechaNacimiento, f);
    edad=e;
    dni = d;
    sexo = s;
    peso = p;
    altura = a;
}

void Persona::setNombre(char n[50]){
    strcpy(nombre, n);
}

void Persona::setEdad(int e){
    edad = e;
}

void Persona::setFechaNacimiento(char f[8]){
    strcpy(fechaNacimiento, f);
}

void Persona::setDni(long d){
    dni = d;
}

void Persona::setSexo(char s){
    sexo = s;
}

void Persona::setPeso(float p){
    peso = p;
}

void Persona::setAltura(float a){
    altura = a;
}

char* Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

char* Persona::getFechaNacimiento(){
    return fechaNacimiento;
}

long Persona::getDni(){
    return dni;
}

char Persona::getSexo(){
    return sexo;
}

float Persona::getPeso(){
    return peso;
}

float Persona::getAltura(){
    return altura;
}

void Persona::cargarDatos(){
    cout << "Ingrese el nombre: ";
    cin.ignore();
    cin.getline(nombre, 50, '\n');
    cout << "Ingrese la fecha de nacimiento: ";
    cin.ignore();
    cin.getline(fechaNacimiento, 8, '\n');
    cout << "Ingrese el DNI: ";
    cin >> dni;
    cout << "Ingrese el sexo: ";
    cin >> sexo;
    cout << "Ingrese el peso: ";
    cin >> peso;
    cout << "Ingrese la altura: ";
    cin >> altura;
}

void Persona::calcularEdad(){
    char c[4];
    strncpy(c, &fechaNacimiento[3], 4); // Copia los 4 caracteres de la fecha de nacimiento que representan el año
    int edad=0;
    edad = atoi(c); // Convierte la cadena a un entero
    edad = 2024 - edad;
    setEdad(edad);
}

float Persona::calcularIMC(){
    return peso/(altura*altura);
}

bool Persona::esMayorDeEdad(){
    if(edad >= 18){
        return true;
    }else{
        return false;
    }
}

void Persona::mostrarDatos(){
    cout<<""<<endl;
    cout << "Datos de la persona: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "DNI: " << dni << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura: " << altura << endl;
    cout<<"IMC: ";

    if(calcularIMC() < 20){
        cout << "Peso inferior al normal" << endl;
    }else if(calcularIMC() >= 20 && calcularIMC() <= 25){
        cout << "Peso normal" << endl;
    }else{
        cout << "Peso superior al normal" << endl;
    }

    if(esMayorDeEdad()){
        cout << "Es mayor de edad" << endl;
    }else{
        cout << "No es mayor de edad" << endl;
    }

}
