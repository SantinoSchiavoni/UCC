/*Elabore un programa que lea las edades de 2 mujeres que son familiares, e
implemente una función que devuelva el nombre de la madre(la edad mayor).*/

#include<iostream>
using namespace std;

string edadmadre(int x, int y, string nombrex, string nombrey){

    if(x>y){
        return nombrex;
    }
    if(y>x){
        return nombrey;
    }
    if(x=y){
        return "error";
    }
}

int main(){
    int edad1, edad2;
    string nombre1, nombre2;
    
    cout<<"Ingrese el nombre y la edad de la 1er mujer"<<endl;
    cout<<"1-Nombre: "; cin>>nombre1;
    cout<<"1-Edad: ";cin>>edad1;
    cout<<"Ingrese el nombre y la edad de la 2da mujer"<<endl;
    cout<<"2-Nombre: "; cin>>nombre2;
    cout<<"2-Edad: "; cin>>edad2; 

    cout<<"La madre es: "<<edadmadre(edad1, edad2, nombre1, nombre2)<<endl;
}