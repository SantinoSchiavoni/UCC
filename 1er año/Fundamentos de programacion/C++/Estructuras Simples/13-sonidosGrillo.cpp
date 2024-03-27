//El número de sonidos emitidos por un grillo en un minuto es
//una función de la temperatura. T=N/4+40,
//donde T es la temperatura en grados Fahrenheit y
//N es el número de sonidos emitidos por minuto.
//El programa debe permitir ingresar el valor N y
//debe mostrar la temperatura en grados Celsius y Fahrenheit.

#include <iostream>
using namespace std;

int main() {
	//Definir Variables; recordar que C=(F-32)/1,8
	float fah, gradosC, nSonidos;
	//Datos
	cout << "Ingresa la cantidad de sonidosXmin emitidos por el grillo" << endl;
	cin >> nSonidos;
	//Logica
	fah = (nSonidos / 4) + 40;
	gradosC = (fah - 32)/1.8;
	//Mostrar
	cout << "La temperatura es de " << fah << " [F] o de " << gradosC << " [C]" << endl;
	return 0;
}
