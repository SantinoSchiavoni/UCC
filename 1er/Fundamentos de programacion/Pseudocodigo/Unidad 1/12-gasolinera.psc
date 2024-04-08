//En una gasolinera, los surtidores registran los galones de combustible "surtidos". Pero los cajeros registran el precio en litros.
//Suponiendo que el precio del combustible es $42,32 y sabiendo que 1 galón es equivalente a 3,378541 litros, diseñe el algoritmo que permita a los cajeros cobrar

Algoritmo gasolinera
	
	//Definir Variables
	Definir galon, litro, precio Como Real
	
	//Datos
	Escribir "Ingresá la cantidad de galones surtidos"
	Leer galon
	
	//Logica
	litro = galon * 3.378541
	precio = litro * 42.32
	
	//Mostrar 
	Escribir "litros = " litro 
	Escribir "Usted debe abonar: $" precio
	
FinAlgoritmo
