//Permite ingresar una distancia en millas y devuelve el valor en kilómetros.

#include<iostream>
using namespace std;

int main(){
	//Declarar variables
	float millas, kilometros;
	const float conversion = 1.609; // 1 milla = 1,609 km
	//Datos
	cout << "Ingrese la distancia en millas a convertir" << endl;
	cin >> millas;
	//Logica
	kilometros = millas * conversion;
	//Mostrar
	cout << millas << " [millas] equivalen a " << kilometros << " [km]" << endl;
	return 0;
}
