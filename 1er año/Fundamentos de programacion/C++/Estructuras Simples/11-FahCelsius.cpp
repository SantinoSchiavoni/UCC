//Dada una determinada temperatura en grados Fahrenheit,
//muestre por pantalla el valor de la misma en grados Celsius.
//Recuerde que: C=(F-32)/1,8

#include <iostream>
using namespace std;

int main(){
	//Declarar Variables
	float gradosC, gradosF;
	//Datos
	cout << "Ingrese los Fahrenheit a convertir" << endl;
	cin >> gradosF;
	//Logica
	gradosC = (gradosF - 32)/1.80;
	//Mostrar
	cout << gradosF << " [F] equivalen a " << gradosC << " [C]" << endl;
	return 0;
}
