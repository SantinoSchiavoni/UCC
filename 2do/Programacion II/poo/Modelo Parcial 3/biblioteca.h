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
using namespace std;

class Libro{
    private:
        string titulo;
        string autor;
        int ano_publicacion;
        string editorial;
    public:
        Libro();
        Libro(string titulo, string autor, int ano_publicacion, string editorial);

        void setTitulo(string titulo);
        void setAutor(string autor);
        void setAnoPublicacion(int ano_publicacion);
        void setEditorial(string editorial);

        string getTitulo();
        string getAutor();
        int getAnoPublicacion();
        string getEditorial();

};

class Persona{
    private:
        string nombre;
        string apellido;
        int dni;
        int edad;
    public:
        Persona();
        Persona(string nombre, string apellido, int dni, int edad);

        void setNombre(string nombre);
        void setApellido(string apellido);
        void setDni(int dni);
        void setEdad(int edad);

        string getNombre();
        string getApellido();
        int getDni();
        int getEdad();
};

class Usuario: public Persona{
    private:
        Libro libros_prestados[100];
        int cantidad_libros_prestados;

    public:
        Usuario();
        Usuario(string nombre, string apellido, int dni, int edad);

        void agregarLibrosPrestados(Libro libro);
        void mostrarLibrosPrestados();
};

class Biblioteca{
    private:
        string nombre;
        string direccion;
        string telefono;
        Libro coleccion_libros[5];
        int num_libros=0;
    public:
        Biblioteca();
        Biblioteca(string nombre, string direccion, string telefono);

        void setNombre(string nombre);
        void setDireccion(string direccion);
        void setTelefono(string telefono);
        void setCantidadLibros(int cantidad_libros);

        string getNombre();
        string getDireccion();
        string getTelefono();
        int getCantidadLibros();

        void agregarLibro(Libro l);
        void prestarLibro(Usuario u, string titulo);
        void mostrarBiblioteca();
};