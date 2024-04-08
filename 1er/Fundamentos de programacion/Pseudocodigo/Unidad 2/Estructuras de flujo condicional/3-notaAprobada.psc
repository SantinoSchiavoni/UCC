//Permite que el usuario ingrese una nota. 
//Si la misma es igual o mayor a 4, debe aparecer el mensaje: "Aprobado".

Algoritmo notaAprobada
	
	//Declarar Variables
	Definir nota Como Entero
	
	//Datos
	Escribir "Ingresa tu nota"
	Leer nota
	
	//Logica
	Si(nota >= 4)
	ENTONCES
		Escribir "Aprobado"
	Sino
		Escribir "Reprobado"
		
	FinSi
	
FinAlgoritmo
