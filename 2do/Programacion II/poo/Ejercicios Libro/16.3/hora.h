/*
Crear una clase llamada hora que tenga miembros
datos separados de tipo int para horas, minutos y
segundos. Un constructor inicializará este dato a 0 y
otro lo inicializará a valores fijos. Una función
miembro deberá visualizar la hora en formato
11:59:59. Otra función miembro sumará dos objetos
de tipo hora pasados como argumentos. Una función
principal main() crea dos objetos inicializados y
uno que no está inicializado. Sumar los dos valores
inicializados y dejar el resultado en el objeto no inicializado.
Por último, visualizar el valor resultante.
*/

class Hora{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Hora();
        Hora(int horas, int minutos, int segundos);

        void setHoras(int horas);
        void setMinutos(int minutos);
        void setSegundos(int segundos);

        int getHoras();
        int getMinutos();
        int getSegundos();

        void visualizar();
        void simplificar();
        Hora operator+(Hora);
};