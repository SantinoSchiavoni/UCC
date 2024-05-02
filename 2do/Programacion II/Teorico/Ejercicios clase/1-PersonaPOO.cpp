/*
 Haz una clase llamada Persona que siga las siguientes especificaciones:
● Atributos:
nombre, edad, DNI, sexo (H hombre, M mujer), peso y altura.
No deben ser accedidos directamente.
● Por defecto, todos los atributos menos el DNI serán valores por defecto según su
tipo (0 números, cadena vacía para String, etc.). Sexo sera hombre por defecto.
● Se implementan los constructores:
○ Un constructor por defecto.
○ Un constructor con el nombre, edad y sexo, el resto por defecto.
○ Un constructor con todos los atributos como parámetro.
● Implementar los siguientes métodos:
○ calcularIMC(): calculara si la persona esta en su peso ideal (peso en
kg/(altura^2 en m)),
Si el cálculo devuelve:
Un valor menor que 20, la función devuelve un -1,
Si el valor está entre 20 y 25 (incluidos), significa que la persona está
por debajo de su peso ideal. La función devuelve un 0
Si devuelve un valor mayor que 25 significa que tiene sobrepeso, la
función devuelve un 1.
■ esMayorDeEdad(): indica si es mayor de edad, devuelve un booleano.
■ comprobarSexo(char sexo): comprueba que el sexo introducido es
correcto. Si no es correcto, sera H. No debe ser visible al exterior.
■ generaDNI(): genera un número aleatorio de 8 cifras, genera a partir
de este su número su letra correspondiente. Este método sera
invocado cuando se construya el objeto. Puedes dividir el método
para que te sea más fácil. No será visible al exterior.
■ Métodos set de cada parámetro, excepto de DNI.
*/

#include <iostream>
using namespace std;

class persona {
    private:
        string nombre;
        int edad;
        int dni;
        char sexo;
        float peso;
        float altura; //altura en metros
    public:
    persona();
    persona(string nombre, int edad, char sexo);
    persona(string nombre, int edad, int dni, char sexo, float peso, float altura);

    void setNombre(string nombre);
    void setEdad(int edad);
    void setSexo(char sexo);
    void setPeso(float peso);
    void setAltura(float altura);

    string getNombre();
    int getEdad();
    int getDNI();
    char getSexo();
    float getPeso();
    float getAltura();

    float calularIMC(float peso, float altura);
    bool mayorEdad(int edad);
    void comprobarSexo(char sexo);
    void generaDNI(int dni);
};