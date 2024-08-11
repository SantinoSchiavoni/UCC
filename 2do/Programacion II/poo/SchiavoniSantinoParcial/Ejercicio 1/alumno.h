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
using namespace std;

class Materia{
    private:
        string nombre_materia;
        int codigo_materia;
        float nota_final;
    public:
        Materia();
        Materia(string nombre_materia, int codigo_materia, float nota_final);

        void setNombreMateria(string nombre_materia);
        void setCodigoMateria(int codigo_materia);
        void setNotaFinal(float nota_final);
        string getNombreMateria();
        int getCodigoMateria();
        float getNotaFinal();
};

class Facultad{
    private:
        string nombre_facultad;
        string direccion_facultad;
        string telefono;
    public:
        Facultad();
        Facultad(string nombre_facultad, string direccion_facultad, string telefono);

        void setNombreFacultad(string nombre_facultad);
        void setDireccionFacultad(string direccion_facultad);
        void setTelefono(string telefono);
        string getNombreFacultad();
        string getDireccionFacultad();
        string getTelefono();

};

class Persona{
    private:
        string nombre_persona;
        int edad;
        int dni;
        string direccion_persona;
    public:
        Persona();
        Persona(string nombre_persona, int edad, int dni, string direccion_persona);

        void setNombrePersona(string nombre_persona);
        void setEdad(int edad);
        void setDni(int dni);
        void setDireccionPersona(string direccion_persona);

        string getNombrePersona();
        int getEdad();
        long getDni();
        string getDireccionPersona();
};

class Alumno: public Persona{
    private:
        int clave_alumno;
        Materia m1;
        Facultad f1;
    public:
        Alumno();
        Alumno(string nombre_persona, int edad, int dni, string direccion_persona, int clave_alumno,string nombre_materia, int codigo_materia, float nota_final,string nombre_facultad, string direccion_facultad, string telefono);

        void setClaveAlumno(int clave_alumno);
        int getClaveAlumno();

        void mostrarNota();

        void mostrarAlumno();
};
