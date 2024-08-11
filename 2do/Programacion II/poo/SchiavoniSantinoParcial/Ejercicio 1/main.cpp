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

int main(){
    float nota_final;
    string nombre_materia,nombre_facultad,direccion_facultad,telefono,nombre_persona,direccion_persona;
    int codigo_materia,edad,dni,clave_alumno;

    Alumno a1(nombre_persona, edad, dni, direccion_persona, clave_alumno,nombre_materia, codigo_materia, nota_final, nombre_facultad, direccion_facultad,telefono);
    Facultad f1(nombre_facultad, direccion_facultad, telefono);
    Materia m1(nombre_materia, codigo_materia, nota_final);

    cout<<"Ingrese datos facultad"<<endl;
    cout<<"Nombre: "; 
    cin>>nombre_facultad;
    f1.setNombreFacultad(nombre_facultad);
    cout<<"Direccion: "; 
    cin>>direccion_facultad;
    f1.setDireccionFacultad(direccion_facultad);
    cout<<"Telefono: "; 
    cin>>telefono;
    f1.setTelefono(telefono);
    cout<<""<<endl;

    cout<<"Ingrese Datos alumno"<<endl;
    cout<<"Nombre: "; 
    cin>>nombre_persona;
    a1.setNombrePersona(nombre_persona);
    cout<<"Edad: "; 
    cin>>edad;
    a1.setEdad(edad);
    cout<<"DNI: "; 
    cin>>dni;
    a1.setDni(dni);
    cout<<"Direccion: ";
    cin>>direccion_persona;
    a1.setDireccionPersona(direccion_persona);
    cout<<"Clave Alumno: ";
    cin>>clave_alumno;
    a1.setClaveAlumno(clave_alumno);

    cout<<"Nombre Materia: ";
    cin>>nombre_materia;
    m1.setNombreMateria(nombre_materia);
    cout<<"Codigo Materia: ";
    cin>>codigo_materia;
    m1.setCodigoMateria(codigo_materia);
    cout<<"Nota final: ";
    cin>>nota_final;
    m1.setNotaFinal(nota_final);
    cout<<""<<endl;

    cout<<"****DATOS FACULTAD****"<<endl;
    cout<<"Nombre: "; f1.getNombreFacultad();
    cout<<"Direccion: "; f1.getDireccionFacultad();
    cout<<"Telefono: "; f1.getTelefono();
    cout<<""<<endl;
    cout<<"****DATOS ALUMNO****"<<endl;
    cout<<"Nombre: "; a1.getNombrePersona();
    cout<<"Edad: "; a1.getEdad();
    cout<<"DNI: "; a1.getDni();
    cout<<"Direccion: "; a1.getDireccionPersona();
    cout<<"Clave Alumno: "; a1.getClaveAlumno();
    cout<<"Nombre Materia: "; m1.getNombreMateria();
    cout<<"Codigo Materia: "; m1.getCodigoMateria();
    cout<<"Nota final: "; a1.mostrarNota(); 

}