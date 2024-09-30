/*
Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea
una vocal
*/

#include <iostream>
#include <cctype>
#include "Lista/Lista.h"
#include <limits>
using namespace std;

bool esVocal(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; // Si c es vocal, return true
}

int contarVocal(Lista<char>& lista, char vocal) {
    int contador = 0;
    for (int i = 0; i < lista.getTamanio(); i++) {
        if (tolower(lista.getDato(i)) == tolower(vocal)) {
            contador++;
        }
    }
    return contador;
}

int main(){
    Lista<char> lista;
    string frase;
    char vocal;

    // Solicitar al usuario la frase o palabra
    cout << "Ingrese una palabra o frase: ";
    getline(cin, frase);

    // Almacenar cada carácter en la lista

    for (int i = 0; i < frase.length(); ++i) {
        char c = frase[i];
        lista.insertarUltimo(c);
    }

    // Validar que la lista no esté vacía
    if (lista.esVacia()) {
        cout << "La lista está vacía. No hay nada que contar." << endl;
        return 0;
    }

    // Solicitar al usuario la vocal que desea contar
    cout << "Ingrese una vocal para contar en la frase: ";
    cin >> vocal;

    // Validar que el carácter ingresado sea una vocal
    if (!esVocal(vocal)) {
        cout << "El carácter ingresado no es una vocal." << endl;
        return 0;
    }

    // Imprimir la lista
    cout << "Lista: ";
    lista.print();

    // Contar la vocal en la lista
    int cantidad = contarVocal(lista, vocal);

    // Imprimir el número de veces que aparece la vocal
    cout << "La vocal '" << vocal << "' aparece " << cantidad << " veces en la lista." << endl;

    return 0;

}