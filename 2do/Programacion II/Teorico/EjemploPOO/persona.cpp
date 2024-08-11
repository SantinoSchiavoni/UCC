#include <iostream>
#include <ctime>
#include <cstdlib>
#include "persona.h"
using namespace std;

Persona::Persona(){
    nombre = "";
    edad = 0;
    dni = 0;
    sexo = 'H';
    peso = 0;
    altura = 0;
}

Persona::Persona(string n, int e, char s){
    nombre = n;
    edad = e;
    dni = 0;
    sexo = s;
    peso = 0;
    altura = 0;
};

Persona::Persona(string n, int e, long d, char s, float p, float a){
    nombre = n;
    edad = e;
    dni = d;
    sexo = s;
    peso = p;
    altura = a;
};

float Persona::calcularIMC(float peso, float altura){
    float imc=0;
    imc = peso/(altura*altura);
    if(imc < 20){
        return -1;
    }else if(imc >= 20 && imc <= 25){
        return 0;
    }else{
        return 1;
    }
}

bool Persona::esMayorDeEdad(int edad){
    if(edad >= 18){
        return true;
    }else{
        return false;
    }
}

void Persona::comprobarSexo(char sexo){
    if(sexo != 'H' && sexo != 'M'){
        sexo = 'H';
    }
}

void Persona::generaDNI(){
    srand(time(NULL));
    dni = rand() % 99999999;
    cout<<"DNI: "<<dni<<endl;
    system("pause");
}

void Persona::setNombre(string n){
    nombre = n;
}

void Persona::setEdad(int e){
    edad = e;
}

void Persona::setSexo(char s){
    //hacer mayuscula la letra
    s = toupper(s);
    sexo = s;
}

void Persona::setPeso(float p){
    peso = p;
}

void Persona::setAltura(float a){
    altura = a;
}

string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
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
