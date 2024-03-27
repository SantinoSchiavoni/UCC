//Queremos conocer los gastos de nuestro último viaje.
//Permita al usuario ingresar todos los gastos deseados.
//El programa mostrará la sumatoria de los mismos cuando el usuario ingrese un valor negativo.
Algoritmo gastosViaje
	
	//Declarar variables
	Definir gastoV, gastosT, num Como Real
	
	gastosT = 0
	gastoV = 0
	
	Escribir "Ingresa tus gastos"
	Escribir "Ingresa -1 para finalizar"

	//Logica
		Mientras ( gastoV >= 0 ) Hacer
			Escribir "gastos"
			Leer gastoV
			si gastoV >= 0 Entonces
				gastosT = gastosT + gastoV
			FinSi
		FinMientras
		Escribir "El gasto total del viaje es " gastosT
FinAlgoritmo
