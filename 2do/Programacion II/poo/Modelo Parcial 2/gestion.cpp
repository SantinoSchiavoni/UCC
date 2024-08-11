/*
Desarrolle las sig clases e identifique cuando se usa Herencia y cuando se usa Composicion
Persona: DNI, apellido, Nombre, mail
Docente: DNI, apellido, Nombre, mail, titulo
Alumno: DNI, apellido, Nombre, mail, Carrera, edad
Materia: Codigo, nombre, Nota
Acciones a desarrollar
Docentes
Anotar en Materia
Consulta de las materias que enseña
Modificación de datos - Consulta

Alumnos
Modificación de datos - Consulta
Inscripción en materia - Carga de Nota

Sistema de Gestión:
1. Alta (Alumnos y Docentes)
2. Inscribir a materia (Alumnos)
3. Anotar titular (Docente)
4. Cargar Nota (Alumnos)
5. Modificar Datos (Alumnos y Docentes)
6. Salir
*/

#include <iostream>
#include "gestion.h"
using namespace std;

Materia::Materia(){};

Materia::Materia(int _codigo, string _nombreMateria, float _nota){
    codigo=_codigo;
    nombreMateria=_nombreMateria;
    nota=_nota;
}

void Materia::setCodigo(int _codigo){
    codigo=_codigo;
}

void Materia::setNombreMateria(string _nombreMateria){
    nombreMateria=_nombreMateria;
}

void Materia::setNota(float _nota){
    nota=_nota;
}

int Materia::getCodigo(){
    return codigo;
}

string Materia::getNombreMateria(){
    return nombreMateria;
}

float Materia::getNota(){
    return nota;
}

Persona::Persona(){};

Persona::Persona(int _DNI, string _apellido, string _nombre, string _mail){
    DNI=_DNI;
    apellido=_apellido;
    nombre=_nombre;
    mail=_mail;
}

void Persona::setDNI(int _DNI){
    DNI=_DNI;
}

void Persona::setApellido(string _apellido){
    apellido=_apellido;
}

void Persona::setNombre(string _nombre){
    nombre=_nombre;
}

void Persona::setMail(string _mail){
    mail=_mail;
}

int Persona::getDNI(){
    return DNI;
}

string Persona::getApellido(){
    return apellido;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getMail(){
    return mail;
}

Docente::Docente(){};

Docente::Docente(int _DNI, string _apellido, string _nombre, string _mail, string _titulo, int _codigo, string _nombreMateria):Persona(_DNI, _apellido, _nombre, _mail){
    titulo=_titulo;
}

void Docente::setTitulo(string _titulo){
    titulo=_titulo;
}

string Docente::getTitulo(){
    return titulo;
}

void Docente::anotarMateria(int _codigo, string _nombreMateria){
    m1.setCodigo(_codigo);
    m1.setNombreMateria(_nombreMateria);
}

void Docente::consultaMaterias(){
    cout<<"Codigo: "<<m1.getCodigo()<<endl;
    cout<<"Nombre: "<<m1.getNombreMateria()<<endl;
    cout<<"Nota: "<<m1.getNota()<<endl;
}

void Docente::modificacionDatos(){
    int DNI;
    string apellido, nombre, mail;
    cout<<"Ingrese nuevo DNI: "<<endl;
    cin>>DNI;
    setDNI(DNI);
    cout<<"Ingrese nuevo Apellido: "<<endl;
    cin>>apellido;
    setApellido(apellido);
    cout<<"Ingrese nuevo Nombre: "<<endl;
    cin>>nombre;
    setNombre(nombre);
    cout<<"Ingrese nuevo Mail: "<<endl;
    cin>>mail;
    setMail(mail);
}

void Docente::mostrarDocente(){
    cout<<"DNI: "<<getDNI()<<endl;
    cout<<"Apellido: "<<getApellido()<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Mail: "<<getMail()<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Codigo Materia: "<<m1.getCodigo()<<endl;
    cout<<"Nombre Materia: "<<m1.getNombreMateria()<<endl;
}

Alumno::Alumno(){};

Alumno::Alumno(int _DNI, string _apellido, string _nombre, string _mail, string _carrera, int _edad,int _codigo, string _nombreMateria, float _nota):Persona(_DNI, _apellido, _nombre, _mail){
    carrera=_carrera;
    edad=_edad;
}

void Alumno::setCarrera(string _carrera){
    carrera=_carrera;
}

void Alumno::setEdad(int _edad){
    edad=_edad;
}

string Alumno::getCarrera(){
    return carrera;
}

int Alumno::getEdad(){
    return edad;
}

void Alumno::modificacionDatos(){
    int DNI;
    string apellido, nombre, mail;
    cout<<"Ingrese nuevo DNI: "<<endl;
    cin>>DNI;
    setDNI(DNI);
    cout<<"Ingrese nuevo Apellido: "<<endl;
    cin>>apellido;
    setApellido(apellido);
    cout<<"Ingrese nuevo Nombre: "<<endl;
    cin>>nombre;
    setNombre(nombre);
    cout<<"Ingrese nuevo Mail: "<<endl;
    cin>>mail;
    setMail(mail);
}

void Alumno::inscripcionMateria(int _codigo, string _nombreMateria){
    m1.setCodigo(_codigo);
    m1.setNombreMateria(_nombreMateria);
}

void Alumno::cargarNota(int _codigo, float _nota){
    m1.setCodigo(_codigo);
    m1.setNota(_nota);
}

void Alumno::mostrarAlumno(){
    cout<<"DNI: "<<getDNI()<<endl;
    cout<<"Apellido: "<<getApellido()<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Mail: "<<getMail()<<endl;
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Codigo Materia: "<<m1.getCodigo()<<endl;
    cout<<"Nombre Materia: "<<m1.getNombreMateria()<<endl;
    cout<<"Nota: "<<m1.getNota()<<endl;
}