/*
Realizar una clase que permita representar un punto en coordenadas 
cartesianas. 
 Definir los datos miembros de la clase. 
 Definir si fuera necesario funciones de carga y muestra de los datos miembro. 
 Definir un constructor que inicializa el punto en el origen de coordenadas. 
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas 
coordenadas. 
 Idem para el operador --. 
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y 
otra para sumar a un punto un valor entero. 
 Idem para el operador -. 
 Definir la/las función/es miembro para obtener la  conversión en coordenadas 
polares. 
 Realizar un programa principal que haga uso de la clase.
*/

class Coordenada {
    private:
        float x;
        float y;
    public:
        Coordenada();
        Coordenada(float x, float y);

        void setX(float x);
        void setY(float y);
        float getX();
        float getY();

        void cargarDatos();
        void mostrarDatos();

        void operator++();
        void operator--();
        Coordenada operator+(Coordenada);
        Coordenada operator+(int);
        Coordenada operator-(Coordenada);
        Coordenada operator-(int);

        float converPolarMagnitud(float x, float y);
        float converPolarAngulo(float x, float y);
};