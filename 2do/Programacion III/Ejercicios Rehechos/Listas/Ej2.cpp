/*
Implementar una función que recibe una lista de números enteros y un número entero “n” y
que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
pasar con la función a 1->2->4->5->7->8.
*/

#include <iostream>
#include "Lista/Lista.h"
#include <limits>
using namespace std;

void borrarLista(Lista<int> &lista, int n){
    int tamanio = lista.getTamanio();
    for(int i=0; i<tamanio; i++){
        if(lista.getDato(i)==n){
            lista.remover(i);
            tamanio--;
            i--;
        }
    }
}

void printLista(Lista<int> &lista) {
    int tamanio = lista.getTamanio(); // Averiguo tamaño de la lista

    for(int i = 0; i < tamanio; i++) {
        cout << lista.getDato(i) << "->";
    }
    cout << "NULL" << endl;
}

int main(){
    Lista<int> lista;
    int n, num;
    cout << "Ingrese numeros enteros para la lista (ingrese 'q' para terminar):" << endl;
    while (true) {
        cout << "Numero: ";
        if (cin >> num) {
            lista.insertarUltimo(num);
        } else {
            cin.clear(); // Limpiar el estado de error del stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar entrada incorrecta
            break; // Salir del bucle cuando se ingresa algo que no es un número
        }
    }
    cout << "Ingrese el numero a eliminar: ";cin >> n;
    borrarLista(lista,n);
    printLista(lista);
}