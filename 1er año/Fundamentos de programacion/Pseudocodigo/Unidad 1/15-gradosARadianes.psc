//Permitir que el usuario ingrese un ángulo en grados. 
//Mostrar en pantalla la conversión a radianes. (Recuerde que 180º = pi radianes)

Algoritmo gradosARadianes
	
	//Declarar Variables
	Definir grados, rad Como Real
	
	//Datos
	Escribir "Ingresa tu angulo en grados"
	Leer grados
	
	//Logica
	rad = (grados * 3.14159)/180
	
	//Mostrar 
	Escribir grados " [°]" " equivalen a " rad " [radianes]" 
	
FinAlgoritmo
