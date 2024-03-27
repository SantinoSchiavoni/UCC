//Permite ingresar una distancia en millas y devuelve el valor en kilómetros.
Algoritmo millasKm
	
	//Declarar Variables
	Definir millas, kilometros Como Real
	
	//Datos
	Escribir "Ingrese la cantidad de Millas a convertir"
	Leer millas
	
	//Logica
	kilometros = millas * 1.609 //1.609 factor de conversion
	
	//Mostrar
	Escribir millas " [milla/s] = " kilometros " [Kilometro/s]"
	Escribir "Recuerde que 1 [milla] equivale a 1.609 [kilometros]"
FinAlgoritmo
