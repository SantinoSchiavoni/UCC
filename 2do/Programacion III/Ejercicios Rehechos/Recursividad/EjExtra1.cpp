#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){ // Caso base
        return 1; // El factorial de 1 es 1
    } else { // Caso recursivo
        return n*factorial(n-1); // n-1 caso de finalizacion
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El factorial es: " << factorial(n);
}