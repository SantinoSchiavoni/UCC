#include <iostream>
#include <cmath>

using namespace std;

int contarParesImpares(int n, int pos = 0) {
    // Caso base: si n es 0, se ha terminado el conteo
    if (n == 0) {
        return 0;
    }

    // Obtener el último dígito del número
    int digito = n % 10;

    // Determinar si la posición es impar y el dígito es par
    if (pos % 2 != 0 && digito % 2 == 0) {
        // Si se cumple la condición, contar este dígito
        return 1 + contarParesImpares(n / 10, pos + 1);
    } else {
        // De lo contrario, seguir con el siguiente dígito
        return contarParesImpares(n / 10, pos + 1);
    }
}

int main() {
    int n;
    
    // Solicitar al usuario un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // Verificar si el número es positivo
    if (n <= 0) {
        cout << "El número debe ser positivo." << endl;
        return 1;
    }

    // Llamar a la función recursiva y mostrar el resultado
    int resultado = contarParesImpares(n);
    cout << "La cantidad de dígitos pares en posiciones impares es: " << resultado << endl;

    return 0;
}
