//Ingresar la cantidad de bancos en un  aula y la cantidad de alumnos en un curso
//De ser necesario, informe cuantos bancos faltan

Algoritmo bancosEnAula
	
	//Declarar Variables
	Definir bancos, alumnos, bancosfaltantes Como Entero
	
	//Datos
	Escribir "Ingresa cuantos bancos hay en el aula"
	Escribir "Y cuantos alumnos hay inscriptos en el curso"
	Leer bancos, alumnos
	
	//Logica
	Si (bancos >= alumnos)
		Entonces
		Escribir "Entran todos los alumnos inscriptos en esta aula"
	SiNo
		bancosfaltantes = alumnos - bancos
		Mostrar "Faltan " bancosfaltantes " banco/s en el aula para que puedan entrar todos"
	FinSi
	
FinAlgoritmo
