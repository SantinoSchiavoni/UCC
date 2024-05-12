/*
Realizar una clase que permita representar una fecha.  
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir un constructor que inicializa la fecha a una fecha dada. 
 Definir un constructor que inicializa la fecha en 01/01/1900. 
 Definir sobrecargas de los siguientes operadores: 
o ++ y – incrementa o decrementa la fecha en 1 día. 
o + y – suma a una fecha un cierto número de días. 
 Realizar un programa principal que haga uso de la clase
*/

#include <iostream>
using namespace std;

class fecha{
    private:
        int day;
        int month;
        int year;
    public:
        fecha();
        fecha(int day, int month, int year);

        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

        int getDay();
        int getMonth();
        int getYear();

        void showDate();

        //Sobrecarga
        fecha operator++();
        fecha operator--();
        fecha operator+(int days);
        fecha operator-(int days);
        
};