/*
Implementar una función que intercambie los elementos entre 2 listas de números enteros
que recibe como parámetros. Si los tamaños de las listas son distintos, igual debe cambiar los
datos y cambiarían los tamaños de cada lista. Ejemplo sea lista1= 15->1->8->35->40->25->12 y
lista2= 3->4->912->45->66 al ejecutar la función quedarían lista1= 3->4->912->45->66 y
lista2=15->1->8->35->40->25->12.
*/

#include <iostream>
#include "Lista/Lista.h"
#include <limits>
using namespace std;

void intercambiar(Lista<int> &lista1, Lista<int> &lista2){
    Lista<int> aux;
    int tamanio1 = lista1.getTamanio();
    int tamanio2 = lista2.getTamanio();
    int tamanioAux = tamanio1;

    for(int i=0; i<tamanio1; i++){
        aux.insertarUltimo(lista1.getDato(i));
    }
    
    lista1.vaciar();
    tamanio1=0;

    for(int i=0; i<tamanio2; i++){
        lista1.insertarUltimo(lista2.getDato(i));
        tamanio1++;
    }

    lista2.vaciar();
    tamanio2=0;

    for(int i=0; i<tamanioAux; i++){
        lista2.insertarUltimo(aux.getDato(i));
        tamanio2++;
    }
}

void printLista(Lista<int> lista) {
    for(int i = 0; i < lista.getTamanio(); i++) {
        cout << lista.getDato(i) << "->";
    }
    cout << "NULL" << endl;
}

int main(){
    Lista<int> lista1;
    Lista<int> lista2;
    int num;
    cout << "Ingrese numeros enteros para la lista 1 (ingrese 'q' para terminar):" << endl;
    cout << "**********LISTA 1 *************" << endl;
    while (true) {
        cout << "Numero: ";
        if (cin >> num) {
            lista1.insertarUltimo(num);
        } else {
            cin.clear(); // Limpiar el estado de error del stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar entrada incorrecta
            break; // Salir del bucle cuando se ingresa algo que no es un número
        }
    }
    cout << "Ingrese numeros enteros para la lista 2 (ingrese 'q' para terminar):" << endl;
    cout << "**********LISTA 2 *************" << endl;
    while (true) {
        cout << "Numero: ";
        if (cin >> num) {
            lista2.insertarUltimo(num);
        } else {
            cin.clear(); // Limpiar el estado de error del stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar entrada incorrecta
            break; // Salir del bucle cuando se ingresa algo que no es un número
        }
    }
    intercambiar(lista1,lista2);
    cout << "*****Lista 1(ex lista2)*****"<<endl;
    printLista(lista1);
    cout << "*****Lista 2(ex lista2)*****"<<endl;
    printLista(lista2);
}