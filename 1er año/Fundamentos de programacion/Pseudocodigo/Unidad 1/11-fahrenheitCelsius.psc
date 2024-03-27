//Dada una determinada temperatura en grados Fahrenheit, muestre por pantalla el valor de la misma en grados Celsius. 
Algoritmo fahrenheitCelsius
	
	//Declarar Variables
	Definir gradosF, gradosC Como Real
	
	//Datos
	Escribir "Ingrese el valor de los grados Fahrenheit a convertir"
	Leer gradosF
	
	//Logica
	gradosC = (gradosF - 32)/1.8
	
	//Mostrar
	Escribir gradosF " [Fahrenheit] = " gradosC " [Celsius]"
	
FinAlgoritmo