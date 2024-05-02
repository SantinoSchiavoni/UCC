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
○ calcularIMC(): calculara si la Persona esta en su peso ideal (peso en
kg/(altura^2 en m)),
Si el cálculo devuelve:
Un valor menor que 20, la función devuelve un -1,
Si el valor está entre 20 y 25 (incluidos), significa que la Persona está
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
Programa:
● Ingresar por teclado el nombre, la edad, sexo, peso y altura.
● Crear 3 objetos de la clase anterior
● Para cada objeto, deberá comprobar si esta en su peso ideal, tiene sobrepeso o por
debajo de su peso ideal con un mensaje.
● Indicar para cada objeto si es mayor de edad.
● Por último, mostrar la información de cada objeto
*/

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

Persona::Persona(){
    nombre = "";
    edad = 0;
    dni = 0;
    sexo = 'H';
    peso = 0;
    altura = 0;
}

Persona::Persona(string n, int e, char s){
    nombre = n;
    edad = e;
    dni = 0;
    sexo = s;
    peso = 0;
    altura = 0;
};

Persona::Persona(string n, int e, long d, char s, float p, float a){
    nombre = n;
    edad = e;
    dni = d;
    sexo = s;
    peso = p;
    altura = a;
};

float Persona::calcularIMC(float peso, float altura){
    float imc=0;
    imc = peso/(altura*altura);
    if(imc < 20){
        return -1;
    }else if(imc >= 20 && imc <= 25){
        return 0;
    }else{
        return 1;
    }
}

bool Persona::esMayorDeEdad(int edad){
    if(edad >= 18){
        return true;
    }else{
        return false;
    }
}

void Persona::comprobarSexo(char sexo){
    if(sexo != 'H' && sexo != 'M'){
        sexo = 'H';
    }
}

void Persona::generaDNI(){
    srand(time(NULL));
    dni = rand() % 99999999;
    cout<<"DNI: "<<dni<<endl;
}

void Persona::setNombre(string n){
    nombre = n;
}

void Persona::setEdad(int e){
    edad = e;
}

void Persona::setSexo(char s){
    sexo = s;
}

void Persona::setPeso(float p){
    peso = p;
}

void Persona::setAltura(float a){
    altura = a;
}

string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

char Persona::getSexo(){
    return sexo;
}

float Persona::getPeso(){
    return peso;
}

float Persona::getAltura(){
    return altura;
}

int main(){
    string nombre3;
    int edad3;
    long dni3;
    char sexo3;
    float peso3;
    float altura3;

    Persona p1;
    Persona p2("Juan", 20, 'H');

    cout<<"Ingrese el nombre: ";
    cin>>nombre3;
    cout<<"Ingrese la edad: ";
    cin>>edad3;
    cout<<"Ingrese el sexo H o M (en mayusculas, H por hombre y M por mujer): ";
    cin>>sexo3;
    cout<<"Ingrese el peso (kg): ";
    cin>>peso3;
    cout<<"Ingrese la altura (m): ";
    cin>>altura3;

    p1.setNombre(nombre3);
    p1.setEdad(edad3);
    p1.setSexo(sexo3);
    p1.setPeso(peso3);
    p1.setAltura(altura3);
    Persona p3(nombre3, edad3, dni3, sexo3, peso3, altura3);

    cout<<"Persona 1: "<<endl;
    cout<<"Nombre: "<<p1.getNombre()<<endl;
    cout<<"Edad: "<<p1.getEdad()<<endl;
    cout<<"Sexo: "<<p1.getSexo()<<endl;
    cout<<"Peso: "<<p1.getPeso()<<endl;
    p1.generaDNI();
    cout<<"Persona 2: "<<endl;
    cout<<"Nombre: "<<p2.getNombre()<<endl;
    cout<<"Edad: "<<p2.getEdad()<<endl;
    cout<<"Sexo: "<<p2.getSexo()<<endl;
    cout<<"Peso: "<<p2.getPeso()<<endl;
    p2.generaDNI();
    cout<<"Persona 3: "<<endl;
    cout<<"Nombre: "<<p3.getNombre()<<endl;
    cout<<"Edad: "<<p3.getEdad()<<endl;
    cout<<"Sexo: "<<p3.getSexo()<<endl;
    cout<<"Peso: "<<p3.getPeso()<<endl;
    p3.generaDNI();

    cout<<"---------------------------------"<<endl;

    cout<<"Persona 1: "<<endl;
    if(p1.calcularIMC(p1.getPeso(), p1.getAltura()) == -1){
        cout<<"Esta por debajo de su peso ideal"<<endl;
    }else if(p1.calcularIMC(p1.getPeso(), p1.getAltura()) == 0){
        cout<<"Esta en su peso ideal"<<endl;
    }else{
        cout<<"Tiene sobrepeso"<<endl;
    }
    if(p1.esMayorDeEdad(p1.getEdad())){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }

    cout<<"Persona 2: "<<endl;
    if(p2.calcularIMC(p2.getPeso(), p2.getAltura()) == -1){
        cout<<"Esta por debajo de su peso ideal"<<endl;
    }else if(p2.calcularIMC(p2.getPeso(), p2.getAltura()) == 0){
        cout<<"Esta en su peso ideal"<<endl;
    }else{
        cout<<"Tiene sobrepeso"<<endl;
    }
    if(p2.esMayorDeEdad(p2.getEdad())){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }

    cout<<"Persona 3: "<<endl;
    if(p3.calcularIMC(p3.getPeso(), p3.getAltura()) == -1){
        cout<<"Esta por debajo de su peso ideal"<<endl;
    }else if(p3.calcularIMC(p3.getPeso(), p3.getAltura()) == 0){
        cout<<"Esta en su peso ideal"<<endl;
    }else{
        cout<<"Tiene sobrepeso"<<endl;
    }
    if(p3.esMayorDeEdad(p3.getEdad())){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }


}