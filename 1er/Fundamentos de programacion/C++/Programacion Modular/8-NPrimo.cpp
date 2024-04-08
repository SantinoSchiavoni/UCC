/*
La función debe recibir como parámetro un número,
 y retornar si es primo o no. 
 Recuerde que un número primo solo es divisible en 1 y en sí mismo.*/

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    int div;
    if(numero <= 1){ //Para restringir numeros negativos y 1
        return false;
    }
    for(int i = 2; i * i <= numero; i++){
        div = numero%i;
        if (div == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    bool es_primo = esPrimo(numero);
    if (es_primo) {
        cout << "El numero ingresado es primo." << endl;
    } else {
        cout << "El numero ingresado no es primo." << endl;
    }
    
    return 0;
}
