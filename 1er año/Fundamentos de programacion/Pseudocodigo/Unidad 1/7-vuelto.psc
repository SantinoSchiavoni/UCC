//El cajero debe poder ingresar el monto de dinero a pagar y el monto de dinero que entregó el cliente.
//Debe salir por pantalla el resultado del cambio que debe ser devuelto. (se asume que el cliente paga un monto mayor al precio del producto)
Algoritmo vuelto
	
	//Declarar variables
	Definir monto, cobro, diferencia Como Real
	
	//Datos
	Escribir "Ingrese el monto a cobrar y cuanto abonó el cliente"
	Escribir "monto a cobrar"
	Leer monto
	Escribir "pago recibido"
	Leer cobro
	
	//Logica
	diferencia = cobro - monto
	
	//Mostrar
	Escribir ("Al cliente le corresponden $") diferencia (" de cambio")
FinAlgoritmo
