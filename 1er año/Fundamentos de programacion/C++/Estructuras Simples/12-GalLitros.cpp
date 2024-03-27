//En una gasolinera, los surtidores registran los galones de combustible “surtidos”.
//Pero los cajeros registran el precio en litros.
//Suponiendo que el precio del combustible es $42,32
//y sabiendo que 1 galón es equivalente a 3,378541 litros,
//diseñe el algoritmo que permita a los cajeros cobrar.

#include <iostream>
using namespace std;

int main() {
	//Declarar Variables
	const float precioC = 42.32;
	const float c = 3.38;
	float litros, galones, precioF;
	//Datos
	cout << "Ingrese los galones que indica el surtidor" << endl;
	cin >> galones;
	//Logica
	litros = galones * c;
	precioF = litros * precioC;
	//Mostrar
	cout << galones << " [gal] equivalen a " << litros << " [litros]" << endl;
	cout << "el cliente debe abonar $" << precioF << endl;
    return 0;
}
