#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        long dni;
        char sexo;
        float peso;
        float altura; //altura en metros
    public:
        Persona();
        Persona(string nombre, int edad, char sexo);
        Persona(string nombre, int edad, long dni, char sexo, float peso, float altura);

        float calcularIMC(float peso, float altura);
        bool esMayorDeEdad(int edad);
        void comprobarSexo(char sexo);
        void generaDNI();

        void setNombre(string nombre);
        void setEdad(int edad);
        void setSexo(char sexo);
        void setPeso(float peso);
        void setAltura(float altura);

        string getNombre();
        int getEdad();
        char getSexo();
        float getPeso();
        float getAltura();


};
