//Se desea calcular el salario de un operario, en base a las horas trabajadas quincenalmente
//Si la cantidad de horas <=75, percibe $80/hora
//Si la cantidad de horas>75, percibe 1,5 veces más las horas excedentes. Del monto calculado se deben realizar los descuentos por aportes e impuestos, con el siguiente criterio:
//Si el monto total <=3000, dto del 12%
//Si 3000<total<=5000, dto del 20%
//Si total>5000, dto. del 30%

Algoritmo salarioDeOperario
	
	//Declarar Variables
	Definir horas, salario, excedentes, montoT Como Real
	salario = 0
	
	//Datos
	Escribir "Ingrese las horas trabajadas quincenalmente"
	Leer horas
	
	//Logica
	Si horas <= 75
		salario = horas * 80
	SiNo
		excedentes = horas - 75
		salario = (horas * 80 ) + (excedentes * 1.5)
	FinSi
	
	Si salario <= 3000 Entonces
		montoT = salario * 0.88
	SiNo
		Si salario >= 5000 Entonces
			montoT = salario * 0.7
		SiNo
			montoT = salario * 0.8
		FinSi
	FinSi
	
	//Mostrar 
	Escribir "el salario es " montoT
	
FinAlgoritmo
