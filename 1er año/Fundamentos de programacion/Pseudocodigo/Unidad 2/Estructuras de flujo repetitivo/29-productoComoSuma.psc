//Realizar el producto entre dos enteros como sumas sucesivas.
Algoritmo productoComoSuma
	
	//Declarar Variables
	Definir num1, num2, numT, contador  Como Entero
	numT = 0
	contador = 0
	
	//Datos
	Escribir "Ingrese los numeros"
	Leer num1, num2
	
	//Logica
	Mientras num2 >=1 Hacer
		numT = numT + num1
		num2 = num2 - 1
		contador = num2
	FinMientras
	Si contador = num2 Entonces
		Escribir "El valor " numT
	FinSi
	
FinAlgoritmo
