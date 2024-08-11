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
using namespace std;

class Materia{
    private:
        int codigo;
        string nombreMateria;
        float nota;
    public:
        Materia();
        Materia(int codigo, string nombreMateria, float nota);

        void setCodigo(int codigo);
        void setNombreMateria(string nombre);
        void setNota(float nota);

        int getCodigo();
        string getNombreMateria();
        float getNota();
};

class Persona{
    private:
        int DNI;
        string apellido;
        string nombre;
        string mail;
    public:
        Persona();
        Persona(int DNI, string apellido, string nombre, string mail);

        void setDNI(int DNI);
        void setApellido(string apellido);
        void setNombre(string nombre);
        void setMail(string mail);

        int getDNI();
        string getApellido();
        string getNombre();
        string getMail();
};

class Docente : public Persona{
    private:
        string titulo;
        Materia m1;
    public:
        Docente();
        Docente(int DNI, string apellido, string nombre, string mail, string titulo, int codigo, string nombreMateria);

        void setTitulo(string titulo);

        string getTitulo();

        void anotarMateria(int codigo, string nombreMateria);
        void consultaMaterias();
        void modificacionDatos();
        void mostrarDocente();
};

class Alumno : public Persona{
    private:
        string carrera;
        int edad;
        Materia m1;
    public:
        Alumno();
        Alumno(int DNI, string apellido, string nombre, string mail, string carrera, int edad, int codigo, string nombreMateria, float notas);

        void setCarrera(string carrera);
        void setEdad(int edad);

        string getCarrera();
        int getEdad();

        void modificacionDatos();
        void inscripcionMateria(int codigo, string nombreMateria);
        void cargarNota(int codigo, float nota);
        void mostrarAlumno();
};
