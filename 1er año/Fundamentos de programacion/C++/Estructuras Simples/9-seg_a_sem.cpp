//El usuario debe poder ingresar la cantidad de segundos,
//y debe mostrar el equivalente en semanas, días, horas, minutos y segundos.

#include<iostream>
using namespace std;

int main(){
	//Declarar Variables
	int semanas, dias, horas, minutos, segundos;
	//Datos
	cout << "Ingrese la cantidad de segundos" << endl;
	cin >> segundos;
	//Logica
	minutos = segundos/60;
	segundos = segundos % 60;
	horas = minutos/60;
	minutos = minutos % 60;
	dias = horas/60;
	horas = horas % 24;
	semanas = dias/7;
	dias = dias % 7;
	//Mostrar
	cout << "Equivale a " << semanas << " semanas" << endl;
	cout << "Equivale a " << dias << " dias" << endl;
	cout << "Equivale a " << horas << " horas" << endl;
	cout << "Equivale a " << minutos << " minutos" << endl;
	cout << "Equivale a " << segundos << " segundos" << endl;
	return 0;
}
