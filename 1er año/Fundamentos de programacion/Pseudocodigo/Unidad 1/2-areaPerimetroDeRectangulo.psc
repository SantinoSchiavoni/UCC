//Calcular el area y el perimetro de un rectangulo
Algoritmo areaPerimetroDeRectangulo
	
	//Definicion de variables
	Definir base, altura, perimetro, area Como Entero
	
	//Datos
	Escribir "Ingresa la base del rectangulo"
	Leer base
	Escribir "Ingresa la altura del rectangulo"
	Leer altura
	
	//Logica
	perimetro = (base * 2) + (altura *2)
	area = base * altura
	
	//Mostrar datos
	Escribir "El perimetro del rectangulo es " perimetro
	Escribir "El area del rectangulo es "  area
FinAlgoritmo
