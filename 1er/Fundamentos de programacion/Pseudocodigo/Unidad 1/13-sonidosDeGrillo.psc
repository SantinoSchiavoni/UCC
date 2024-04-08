//El número de sonidos emitidos por un grillo en un minuto es una función de la temperatura. 
//T=N/4+40, donde T es la temperatura en grados Fahrenheit y N es el número de sonidos emitidos por minuto.
//El programa debe permitir ingresar el valor N y debe mostrar la temperatura en grados Celsius y Fahrenheit.

Algoritmo sonidosDeGrillo
	
	//Declarar Variables
	Definir gradosC, gradosF, sonidosXmin Como Real
	
	//Datos
	Escribir "Ingrese el numero de sonidos emitidos por un grillo por minuto"
	Leer sonidosXmin
	
	//Logica
	gradosF = (sonidosXmin/4) + 40
	gradosC = (gradosF - 32)/1.8 
	
	//Mostrar
	Escribir "Cuando el grillo emite " sonidosXmin " sonido/s por minuto"
	Escribir "La temperatura equivale a " gradosF " [Fahrenheit]"
	Escribir "La temperatura equivale a " gradosC " [Celsius]"
	
FinAlgoritmo
