// El usuario debe poder ingresar la cantidad de segundos, y debe mostrar el equivalente en semanas, días, horas, minutos y segundos.
Algoritmo segundoASemana
	
	//Declarar Variables
	Definir seg, minutos, horas, dias, semanas Como Entero
	
	//Datos
	Escribir "Ingrese el tiempo en [segundos]"
	Leer seg
	
	//Logica
	minutos = trunc(seg/60)
	seg = seg%60
	horas = trunc(minutos/60)
	minutos = minutos%60
	dias = trunc(horas/24)
	horas = horas%24
	semanas = trunc(dias/7)
	dias = dias%7
	
	//Mostrar 
	Escribir "semanas: " semanas
	Escribir "dias: " dias
	Escribir "horas: " horas
	Escribir "minutos: " minutos
	Escribir "segundos: " seg
	
FinAlgoritmo
