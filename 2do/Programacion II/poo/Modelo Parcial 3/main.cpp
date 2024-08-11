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

int main(){
    Biblioteca b1("Biblioteca Nacional", "Av. Las Heras 2900", "4802-6000");
    Usuario u1("Juan", "Perez", 12345678, 30);
    int opcion;

    do {
        cout << "1. Agregar libro a la biblioteca" << endl;
        cout << "2. Prestar libro" << endl;
        cout << "3. Mostrar libros prestados" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;

        switch(opcion) {
            case 1: {
                Libro l1;
                string titulo, autor, editorial;
                int aniopublicacion;
                cout << "Ingrese el titulo del libro: ";
                cin.ignore();
                getline(cin, titulo);
                l1.setTitulo(titulo);
                cout << "Ingrese el autor del libro: ";
                getline(cin, autor);
                l1.setAutor(autor);
                cout << "Ingrese el anio de publicacion: ";
                cin >> aniopublicacion;
                l1.setAnoPublicacion(aniopublicacion);
                cout << "Ingrese la editorial: ";
                cin.ignore();
                getline(cin, editorial);
                l1.setEditorial(editorial);
                b1.agregarLibro(l1);
                break;

            }
            case 2: {
                string titulo;
                cout << "Ingrese el nombre del libro a pedir: ";
                cin.ignore();
                getline(cin, titulo);
                b1.prestarLibro(u1, titulo);
                break;
            }
            case 3:
                u1.mostrarLibrosPrestados();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion incorrecta" << endl;
                break;
        }
    } while(opcion != 4);
    b1.mostrarBiblioteca();

}