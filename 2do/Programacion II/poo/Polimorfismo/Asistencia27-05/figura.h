/*
Se tiene una aplicacion que permite dibujar distintas figuras geométricas, pueden ser rectángulos
circulos y triangulos
Crea un programa en c++ utilizando herencia y polimorfismos, que permita crear un arreglo con 8 figuras
geométricas y segun el tipo indique por pantalla su perimetro y su area
*/

#include <iostream>
#include <cmath>
using namespace std;

class Figura {
    public:
        virtual float area()=0;
        virtual float perimetro()=0;
        virtual void mostrar()=0;
};

class Rectangulo : public Figura {
    private:
        float base, altura;
    public:
        Rectangulo();
        Rectangulo(float, float);
        void setBase(float);
        void setAltura(float);
        float getBase();
        float getAltura();

        float area();
        float perimetro();
        void mostrar();
};

class Circulo : public Figura {
    private:
        float radio;
    public:
        Circulo();
        Circulo(float);
        void setRadio(float);
        float getRadio();

        float area();
        float perimetro();
        void mostrar();
};

class Triangulo : public Figura {
    private:
        float lado1;
    public:
        Triangulo();
        Triangulo(float, float, float);
        void setLado1(float);
        float getLado1();

        float area();
        float perimetro();
        void mostrar();
};