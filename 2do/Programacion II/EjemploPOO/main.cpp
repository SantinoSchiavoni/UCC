#include <iostream>
#include <ctime>
#include <cstdlib>
#include "persona.h"
using namespace std;


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