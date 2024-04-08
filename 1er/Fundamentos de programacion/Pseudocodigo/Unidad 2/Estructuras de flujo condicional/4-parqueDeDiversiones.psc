//De acuerdo a la altura de una persona, se le permite entrar a un juego en un parque de diversiones.
//Para poder subirse a la montaña rusa, la persona debe medir 1,30 mts o más, caso contrario no puede.

Algoritmo parqueDeDiversiones
	
	//Declarar variables
	Definir altura como Entero
	
	//Datos
	Escribir "Ingresa tu altura en centimetros"
	Leer altura
	
	//Logica
	Si (altura >= 130)
		Entonces
		Escribir "Puede ingresar al juego"
	SiNo
		Escribir "Usted no puede ingresar"
	FinSi
FinAlgoritmo
