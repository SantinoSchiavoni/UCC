/*
Implementar una función llamada “printLista” que reciba una lista y una posición “p” e
imprima los elementos de esa lista a partir de la posición “p”. No debe modificarse la lista
original. Ej: listaOriginal: 1->2->3->4->5->6->7->8->9->10 con p=5 Por pantalla se verá:
5->6->7->8->9->10
*/

#include <iostream>
#include "Lista/Lista.h"
#include <limits>
using namespace std;

void printLista(Lista<int> &lista, int p){

    if(lista.getTamanio()<p || p<0){
        cout << "Posicion invalida" << endl;
    }

    for(int i=p; i<lista.getTamanio(); i++){
        cout << lista.getDato(i) << "->";
    }
    cout << "NULL" <<endl;
}

int main(){
    Lista<int> lista;
    int num;
    int p;

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
    cout << "Ingrese la posicion: ";cin >> p;
    printLista(lista,p);

}