//El usuario debe poder ingresar el monto a pagar, y el dinero abonado (se supone que siempre el dinero abonado es mayor al dinero gastado, y que estos números son enteros).
// Considerando que el cajero solo posee billetes de las siguientes denominaciones 50, 20, 10, 5, 1
// Calcule la cantidad de cada tipo de billete que deben ser entregados como vuelto.

Algoritmo billetesDeVuelto
	
	//Declarar Variables
	Definir aPagar, abonado, vuelto, b50, b20, b10, b5, b1 Como Entero
	
	//Datos
	Escribir "Ingresa el monto a pagar y el dinero abonado"
	Escribir "monto a pagar"
	Leer aPagar
	Escribir "dinero abonado"
	Leer abonado
	
	//Logica
	vuelto = abonado - aPagar
	b50 = trunc(vuelto/50)
	vuelto = vuelto%50
	b20 = trunc(vuelto/20)
	vuelto = vuelto%20
	b10 = trunc(vuelto/10)
	vuelto = vuelto%10
	b5 = trunc(vuelto/5)
	vuelto = vuelto%5
	b1 = trunc(vuelto/1)
	vuelto = vuelto%1
	
	//Mostrar 
	Escribir "se deben entregar " b50 " billete/s de $50"
	Escribir "se deben entregar " b20 " billete/s de $20"
	Escribir "se deben entregar " b10 " billete/s de $10"
	Escribir "se deben entregar " b5 " billete/s de $5"
	Escribir "se deben entregar " b1 " billete/s de $1"
	
FinAlgoritmo
