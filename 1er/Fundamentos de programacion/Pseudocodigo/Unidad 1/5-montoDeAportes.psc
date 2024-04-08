//Calcular en base al sueldo bruto el sueldo neto y cuanto hay de aporte jubilatorio, Obra Social y de PAMI 
Algoritmo montoDeAportes
	//Definir Variables
	Definir sueldoBruto, sueldoNeto, aporteJubilatorio, obraSocial, pami Como Real
	
	//Datos
	Escribir "Ingresa tu sueldo bruto"
	Leer sueldoBruto
	
	//Logica
	sueldoNeto = sueldoBruto * 0.83
	aporteJubilatorio = sueldoBruto * 0.11
	obraSocial = sueldoBruto * 0.03
	pami = sueldoBruto * 0.03
	
	//Mostrar 
	Escribir "Tu sueldo neto es " sueldoNeto
	Escribir "Tu aporte jubilatorio es " aporteJubilatorio
	Escribir "Tu aporte de Obra Social es " obraSocial
	Escribir "Tu aporte de PAMI es " pami
FinAlgoritmo
