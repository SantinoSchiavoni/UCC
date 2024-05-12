/*
Realizar  una  clase  que  permita  representar  un  cronómetro.  Dicho  cronómetro 
consta  de  horas,  minutos  y  segundos.  Las  horas  no  tienen  límite  en  valor 
mientras que los minutos y segundos llegan al máximo hasta 59. 
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa a cero el cronómetro. 
 Definir un método Reset que permita llevar a cero el cronómetro. 
 Definir la sobrecarga del operador ++ para producir el incremento del 
cronómetro en un segundo. 
 Realizar un programa principal que haga uso de la clase. 
*/

#include <iostream>

class Cronometro {
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Cronometro();
        Cronometro(int horas, int minutos, int segundos);

        void setHoras(int horas);
        void setMinutos(int minutos);
        void setSegundos(int segundos);

        int getHoras();
        int getMinutos();
        int getSegundos();

        void cargarDatos();
        void mostrarDatos();
        void reset();
        void operator++();
};