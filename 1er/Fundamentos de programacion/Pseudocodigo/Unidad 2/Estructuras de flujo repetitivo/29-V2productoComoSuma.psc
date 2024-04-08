//Realizar el producto entre dos enteros como sumas sucesivas.
Algoritmo v2ProductoComoSuma
	
	//Declarar Variables
	Definir num1, num2, numT, i Como Entero
	numT = 0
	
	//Datos
	Escribir "Ingesa los dos numeros"
	Leer num1, num2
	
	//Logica
	Para i=1 Hasta num2 Con Paso 1 Hacer
		numT = numT + num1
	FinPara
	Escribir "El valor del producto es " numT
	
FinAlgoritmo
