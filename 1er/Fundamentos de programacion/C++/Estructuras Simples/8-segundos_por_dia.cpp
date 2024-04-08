//Calcule la cantidad de segundos que hay en una determinada cantidad de días
//(que deben ser ingresados por teclado).

#include<iostream>
using namespace std;

int main(){
	//Declare Variablles
	float seconds, days;
	const float sec_per_day = 86400;  // 1 day = 86400 seconds
	//Data
	cout << "Ingresa la cantidad de dias" << endl;
	cin >> days;
	//Logic
	seconds = days * sec_per_day;
	//Show Data
	cout << "en " << days << " dia/s hay " << seconds << " segundos" << endl;
	return 0;
}
