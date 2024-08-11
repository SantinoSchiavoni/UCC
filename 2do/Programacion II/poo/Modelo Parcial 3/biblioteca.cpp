/*
Simule un sistema de gestion de una biblioteca con las siguientes clases
->clase Libro: represente un titulo, con atributos como titulo, autor, año de publicacion y editorial
->clase Biblioteca: con nombre, direccion, telefono y una coleccion de libros
->Clase Usuario: que tenga una lista (vector) de libros que pidió prestados
->Clase Persona: que tenga atributos comunes como nombre, apellido, dni y edad
El sistema debe permitir:
agregar libros a la biblioteca (si es que no se encuentra ya), prestar libros a usuarios y mostrar
la informacion de los libros prestados por un usuario.
*/

#include <iostream>
#include "biblioteca.h"
using namespace std;

Libro::Libro(){}

Libro::Libro(string _titulo, string _autor, int _ano_publicacion, string _editorial){
    titulo = _titulo;
    autor = _autor;
    ano_publicacion = _ano_publicacion;
    editorial = _editorial;
}

void Libro::setTitulo(string _titulo){
    titulo = _titulo;
}

void Libro::setAutor(string _autor){
    autor = _autor;
}

void Libro::setAnoPublicacion(int _ano_publicacion){
    ano_publicacion = _ano_publicacion;
}

void Libro::setEditorial(string _editorial){
    editorial = _editorial;
}

string Libro::getTitulo(){
    return titulo;
}

string Libro::getAutor(){
    return autor;
}

int Libro::getAnoPublicacion(){
    return ano_publicacion;
}

string Libro::getEditorial(){
    return editorial;
}


Persona::Persona(){}

Persona::Persona(string _nombre, string _apellido, int _dni, int _edad){
    nombre = _nombre;
    apellido = _apellido;
    dni = _dni;
    edad = _edad;
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

void Persona::setApellido(string _apellido){
    apellido = _apellido;
}

void Persona::setDni(int _dni){
    dni = _dni;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getApellido(){
    return apellido;
}

int Persona::getDni(){
    return dni;
}

int Persona::getEdad(){
    return edad;
}


Biblioteca::Biblioteca(){}

Biblioteca::Biblioteca(string _nombre, string _direccion, string _telefono){
    Libro l;
    nombre = _nombre;
    direccion = _direccion;
    telefono = _telefono;
    num_libros = 0;
    for (int i = 0; i < 5; i++)
    {
        coleccion_libros[i] = l;
    }
    

}

void Biblioteca::setNombre(string _nombre){
    nombre = _nombre;
}

void Biblioteca::setDireccion(string _direccion){
    direccion = _direccion;
}

void Biblioteca::setTelefono(string _telefono){
    telefono = _telefono;
}

string Biblioteca::getNombre(){
    return nombre;
}

string Biblioteca::getDireccion(){
    return direccion;
}

string Biblioteca::getTelefono(){
    return telefono;
}

void Biblioteca::agregarLibro(Libro l){
    for(int i = 0; i < 5; i++){
        if(coleccion_libros[i].getTitulo() == l.getTitulo()){
            cout << "El libro ya se encuentra en la biblioteca." << endl;
            return;
        }
    }
    if(num_libros < 5){
        coleccion_libros[num_libros] = l;
        num_libros++;
        cout<<"Libro agregado correctamente"<<endl;
    }else{
            cout<<"No se pueden agregar mas libros"<<endl;
        }
}

void Biblioteca::prestarLibro(Usuario u, string _titulo){
    for (int i = 0; i < 5; i++) {
        if (coleccion_libros[i].getTitulo() == _titulo) {
            u.agregarLibrosPrestados(coleccion_libros[i]);
            for (int j = i; j < num_libros - 1; j++) {
                coleccion_libros[j] = coleccion_libros[j + 1];
            }
            num_libros--;
            
            cout << "Libro prestado." << endl;
            return;
        }
    }
    cout << "El libro no se encuentra en la biblioteca." << endl;
}

void Biblioteca::mostrarBiblioteca(){

        for(int i = 0; i < num_libros; i++){
            cout << "Libro " << i+1 << endl;
            cout << "Titulo: " << coleccion_libros[i].getTitulo() << endl;
            cout << "Autor: " << coleccion_libros[i].getAutor() << endl;
            cout << "Año de publicacion: " << coleccion_libros[i].getAnoPublicacion() << endl;
            cout << "Editorial: " << coleccion_libros[i].getEditorial() << endl;
            cout<<""<<endl;
        }
    }




Usuario::Usuario(){}

Usuario::Usuario(string _nombre, string _apellido, int _dni, int _edad) : Persona(_nombre, _apellido, _dni, _edad){
    cantidad_libros_prestados = 0;
    setNombre(_nombre);
    setApellido(_apellido);
    setDni(_dni);
    setEdad(_edad);
}

void Usuario::agregarLibrosPrestados(Libro l){
    if(cantidad_libros_prestados <5){
        libros_prestados[cantidad_libros_prestados] = l;
        cantidad_libros_prestados++;
    }
    else{
        cout<<"No se pueden agregar mas libros"<<endl;
    }
}

void Usuario::mostrarLibrosPrestados(){
    if(cantidad_libros_prestados == 0){
        cout << "No hay libros prestados." << endl;
    }else{
        for(int i = 0; i < cantidad_libros_prestados; i++){
            cout << "Libro " << i+1 << endl;
            cout << "Titulo: " << libros_prestados[i].getTitulo() << endl;
            cout << "Autor: " << libros_prestados[i].getAutor() << endl;
            cout << "Año de publicacion: " << libros_prestados[i].getAnoPublicacion() << endl;
            cout << "Editorial: " << libros_prestados[i].getEditorial() << endl;
            cout<<""<<endl;
        }
    }
}

