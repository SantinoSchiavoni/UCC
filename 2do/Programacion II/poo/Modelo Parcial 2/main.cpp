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

void menu(){
    cout<<"----------------MENU-------------"<<endl;
    cout<<"(1): Cargar alumno/docente"<<endl;
    cout<<"(2): Inscribir alumno a materia"<<endl;
    cout<<"(3): Anotar materia a docente"<<endl;
    cout<<"(4): Cargar nota a alumnos"<<endl;
    cout<<"(5): Modificar datos"<<endl;
    cout<<"(6): Salir"<<endl;
}

int main(){
    int op1, op2;
    int codigo, dni, edad;
    string nombreMateria, apellido, nombre, mail, carrera, titulo;
    float nota;

    Persona p1(dni, apellido, nombre, mail);
    Docente d1(dni, apellido, nombre, mail, titulo, codigo, nombreMateria);
    Alumno a1(dni, apellido, nombre, mail, carrera, edad, codigo, nombreMateria, nota);
    Materia m1(int codigo, string nombreMateria, float nota);

    cout<<"Bienvenido al sistema de gestion"<<endl;
    cout<<"---------------------------------"<<endl;
    menu();
    cout<<"Ingrese una opcion: ";
    cin>>op1;

    do{
        switch(op1){
            case 1:
                cout<<"Si quiere cargar un alumno presione 1, si quiere cargar un docente presione 2"<<endl;
                cin>>op2;
                    if(op2==1){
                        cout<<"***Cargando ALumno***"<<endl;
                        cout<<"Ingrese DNI: "<<endl;
                        cin>>dni;
                        a1.setDNI(dni);
                        cout<<"Ingrese Apellido: "<<endl;
                        cin>>apellido;
                        a1.setApellido(apellido);
                        cout<<"Ingrese Nombre: "<<endl;
                        cin>>nombre;
                        a1.setNombre(nombre);
                        cout<<"Ingrese Mail: "<<endl;
                        cin>>mail;
                        a1.setMail(mail);
                        cout<<""<<endl;
                        cout<<"Ingrese Carrera: "<<endl;
                        cin>>carrera;
                        a1.setCarrera(carrera);
                        cout<<"Ingrese Edad: "<<endl;
                        cin>>edad;
                        a1.setEdad(edad);

                    }
                    if(op2==2){
                        cout<<"***Cargando Docente***"<<endl;
                        cout<<"Ingrese DNI: "<<endl;
                        cin>>dni;
                        d1.setDNI(dni);
                        cout<<"Ingrese Apellido: "<<endl;
                        cin>>apellido;
                        d1.setApellido(apellido);
                        cout<<"Ingrese Nombre: "<<endl;
                        cin>>nombre;
                        d1.setNombre(nombre);
                        cout<<"Ingrese Mail: "<<endl;
                        cin>>mail;
                        d1.setMail(mail);
                        cout<<"Ingrese Titulo: "<<endl;
                        cin>>titulo;
                        d1.setTitulo(titulo);
                        cout<<""<<endl;
                    }
                cout<<"***Datos Cargados***"<<endl;
                cout<<"---------------------------------"<<endl;
                menu();
                cout<<"Ingrese una opcion: ";
                cin>>op1;
            break;

            case 2:
                cout<<"***Inscribir Alumno a Materia***"<<endl;
                cout<<"Ingrese codigo de la materia: "<<endl;
                cin>>codigo;
                cout<<"Ingrese nombre de la materia: "<<endl;
                cin>>nombreMateria;
                a1.inscripcionMateria(codigo, nombreMateria);
                cout<<"***Datos Cargados***"<<endl;
                cout<<"---------------------------------"<<endl;
                menu();
                cout<<"Ingrese una opcion: ";
                cin>>op1;
            break;

            case 3:
                cout<<"***Anotar Materia a Docente***"<<endl;
                cout<<"Ingrese codigo de la materia: "<<endl;
                cin>>codigo;
                cout<<"Ingrese nombre de la materia: "<<endl;
                cin>>nombreMateria;
                d1.anotarMateria(codigo, nombreMateria);
                cout<<"***Datos Cargados***"<<endl;
                cout<<"---------------------------------"<<endl;
                menu();
                cout<<"Ingrese una opcion: ";
                cin>>op1;
            break;

            case 4:
                cout<<"***Cargar Nota a Alumnos***"<<endl;
                cout<<"Ingrese nota: "<<endl;
                cin>>nota;
                a1.cargarNota(codigo,nota);
                cout<<"***Datos Cargados***"<<endl;
                cout<<"---------------------------------"<<endl;
                menu();
                cout<<"Ingrese una opcion: ";
                cin>>op1;
            break;

            case 5:
                cout<<"***Modificar Datos***"<<endl;
                cout<<"Si quiere modificar datos de un alumno presione 1, si quiere modificar datos de un docente presione 2"<<endl;
                cin>>op2;
                    if(op2==1){
                        cout<<"***Modificando Datos de Alumno***"<<endl;
                        a1.modificacionDatos();
                    }
                    if(op2==2){
                        cout<<"***Modificando Datos de Docente***"<<endl;
                        d1.modificacionDatos();
                    }
                cout<<"***Datos Cargados***"<<endl;
                cout<<"---------------------------------"<<endl;
                menu();
                cout<<"Ingrese una opcion: ";
                cin>>op1;
            break;
        }
    }while(op1!=6);

    cout<<"Datos Alumno"<<endl;
    a1.mostrarAlumno();
    cout<<""<<endl;
    cout<<"Datos Docente"<<endl;
    d1.mostrarDocente();
}
