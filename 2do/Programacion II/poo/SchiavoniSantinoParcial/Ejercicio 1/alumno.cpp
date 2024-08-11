/*
Para las clases:
persona(nombre, edad,dni,direccion)
alumno(clave_alumno)
facultad(Nombre, direccion,telefono)
Materia(Nombre,Codigo,Nota_final)

Establecer: 
1)Relacion entre las clases
2)Definir e implementar todos los métodos de las clases
3)Cargar y mostrar los datos correspondientes a un alumno y su correspondiente materia

Si la materia es Física o Algebra la nota debe ser mostrada en la escala del 0-100
Si la materia es PensamientoF o introduccionI las escalas son: 0 y <4 muestra "deficiente", 
4 y <7, "regular", 7-10 "muy bueno"
Las demas en escala 0-10 
*/

#include<iostream>
#include "alumno.h"
using namespace std;

Materia::Materia(){};

Materia::Materia(string _nombre_materia, int _codigo_materia, float _nota_final){
    nombre_materia=_nombre_materia;
    codigo_materia=_codigo_materia;
    nota_final=_nota_final;
}

void Materia::setNombreMateria(string _nombre_materia){
    nombre_materia=_nombre_materia;
}

void Materia::setCodigoMateria(int _codigo_materia){
    codigo_materia=_codigo_materia;
}

void Materia::setNotaFinal(float _nota_final){
    nota_final=_nota_final;
}

string Materia::getNombreMateria(){
    return nombre_materia;
}

int Materia::getCodigoMateria(){
    return codigo_materia;
}

float Materia::getNotaFinal(){
    return nota_final;
}

Facultad::Facultad(){};

Facultad::Facultad(string _nombre_facultad, string _direccion_facultad, string _telefono){
    nombre_facultad=_nombre_facultad;
    direccion_facultad=_direccion_facultad;
    telefono=_telefono;
};

void Facultad::setNombreFacultad(string _nombre_facultad){
    nombre_facultad=_nombre_facultad;
}

void Facultad::setDireccionFacultad(string _direccion_facultad){
    direccion_facultad=_direccion_facultad;
}

void Facultad::setTelefono(string _telefono){
    telefono=_telefono;
}

string Facultad::getNombreFacultad(){
    return nombre_facultad;
}

string Facultad::getDireccionFacultad(){
    return direccion_facultad;
}

string Facultad::getTelefono(){
    return telefono;
}

Persona::Persona(){};

Persona::Persona(string _nombre_persona, int _edad, int _dni, string _direccion_persona){
    nombre_persona=_nombre_persona;
    edad=_edad;
    dni=_dni;
    direccion_persona=_direccion_persona;
};

void Persona::setNombrePersona(string _nombre_persona){
    nombre_persona=_nombre_persona;
}

void Persona::setEdad(int _edad){
    edad=_edad;
}

void Persona::setDni(int _dni){
    dni=_dni;
}

void Persona::setDireccionPersona(string _direccion_persona){
    direccion_persona=_direccion_persona;
}

string Persona::getNombrePersona(){
    return nombre_persona;
}

int Persona::getEdad(){
    return edad;
}

long Persona::getDni(){
    return dni;
}

string Persona::getDireccionPersona(){
    return direccion_persona;
}

Alumno::Alumno(){};

Alumno::Alumno(string _nombre_persona, int _edad, int _dni, string _direccion_persona, int _clave_alumno, string _nombre_materia, int _codigo_materia, float _nota_final,string _nombre_facultad, string _direccion_facultad, string _telefono):Persona(_nombre_persona, _edad, _dni, _direccion_persona){
    clave_alumno=_clave_alumno;
}

void Alumno::setClaveAlumno(int _clave_alumno){
    clave_alumno=_clave_alumno;
}

int Alumno::getClaveAlumno(){
    return clave_alumno;
}

void Alumno::mostrarNota(){
    float nota1;
    if(m1.getNombreMateria()== "Fisica" || m1.getNombreMateria()=="Algebra"){
        nota1=m1.getNotaFinal();
        nota1=nota1*10;
        m1.setNotaFinal(nota1);
        cout<<"La nota final es: "<<m1.getNotaFinal();
    }
    else if(m1.getNombreMateria()== "PensamientoF" || m1.getNombreMateria()=="IntroduccionI"){
        if(m1.getNotaFinal()<4){
            cout<<"Deficiente"<<endl;
        }
        else if(m1.getNotaFinal()>4 && m1.getNotaFinal()<7){
            cout<<"Regular"<<endl;
        }
        else{
            cout<<"Muy Bueno"<<endl;
        }
    } else{
        cout<<"La nota es: "<<m1.getNotaFinal()<<endl;
    }
}


