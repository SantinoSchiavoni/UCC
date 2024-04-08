//Realizar la potencia como productos sucesivos.
Algoritmo potenciaComoProducto
	
	//Declarar variables
	Definir num1, num2, numT, i Como Real
	numT = 1
	
	//Datos
	Escribir "Ingresa los numeros"
	Leer num1, num2
	
	//Logica
	Para i=1 Hasta num2 Con Paso 1 Hacer
	numT = numT * num1	
	Fin Para
	Escribir numT

FinAlgoritmo
