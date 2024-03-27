//Permita al usuario ingresar cualquier cantidad de notas.
//El proceso finalizará cuando se ingrese un ?0?. 
//Posteriormente, calculará el promedio de las notas.

Algoritmo promedioNotas
	
	//Declarar Variables
	Definir nota, promedio, contador, acumulador Como Real
	
	acumulador = 0
	contador = 0
	
	Escribir "Ingresa tus notas"
	Escribir "Cuando no tenga mas notas, ingrese 0"
	
	//logica
	Repetir
		Leer nota
		si nota > 0
			contador = contador + 1
			acumulador = acumulador + nota
			promedio = (acumulador) / contador
		FinSi
	Mientras Que nota > 0
	Escribir "El promedio es " promedio
	
FinAlgoritmo
