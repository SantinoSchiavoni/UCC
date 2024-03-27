//Calcule la cantidad de segundos que hay en una determinada cantidad de días (que deben ser ingresados por teclado).
Algoritmo segundosenXDias
	
	//Declarar Variables
	Definir dia, calculo Como Entero
	
	//Datos
	Escribir "Ingrese la cantidad de dia/s a calcular"
	Leer dia
	
	//Logica
	calculo = dia * 24 * 60 * 60 // horas / minutos / segundos 
	
	//Mostrar
	Escribir ("En ") dia ("  dia/s hay un total de ") calculo (" segundos")
	
FinAlgoritmo
