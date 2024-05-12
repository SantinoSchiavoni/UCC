/*
Construir una clase que permita representar un arreglo unidimensional de 
enteros. Obtener las siguientes sobrecargas: 
 Operador + para sumar dos arreglos. 
 Operador – para restar dos arreglos. 
 Operador * para calcular el producto escalar de 2 arreglos. 
 Operador [] para subindicar los elementos del arreglo. 
Realizar un programa principal que haga uso de la clase.
*/

class Arreglo{
    private:
        int arreglo[100];
        int n;
    public:
        Arreglo();
        Arreglo(int arreglo, int n);

        void setArreglo(int arreglo);
        int getArreglo();
        void setN(int n);
        int getN();

        Arreglo operator+(Arreglo a);
        Arreglo operator-(Arreglo a);
        Arreglo operator*(Arreglo a);
        int operator[](int i);
};