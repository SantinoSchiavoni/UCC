/*
1) Diseñar una clase que permita representar el estado de un contenedor de material utilizado para la producción de un componente químico. 
Los atributos a considerar son:
->Código de Material, Cantidad de actual, Cantidad Mínima y Cantidad Máxima.
Implementar los siguientes métodos: Constructor, Métodos Set y Get para cada atributo. 
La clase debe permitir: 
a) Inicializar la cantidad de material inicial, minima y máxima. 
b) Realizar depósitos de material 
c) Realizar extracciones de material 
d) Verificar cantidad de material de depósito 
Menú a implementar: 
1_ Crear Depósito 
2_ Agregar material 
3_ Extraer material 
4_ Verificar estado depósito 
5_ Salir 
Las reglas a tener en cuenta son las siguientes: 
1) Al crear el objeto se determinan, los valores Cantidad Actual y Cantidad Máxima deben ser iguales
2) No se puede extraer mas material que el existente. 
3)Antes de realizar la una extracción o agregado de material, se debe verificar el estado del contenedor.
*/

#include <iostream>
#include "material.h"
using namespace std;

// Constructor
Material::Material(int codigo,int actual,int min,int max){
    codigoMaterial=codigo;
    cantidadActual=actual;
    cantidadMinima=min;
    cantidadMaxima=max;

    cantidadActual=cantidadMaxima;
}

// Metodos set
void Material::setCodigoMaterial(int codigo){
    codigoMaterial=codigo;
}

void Material::setCantidadActual(int actual){
    cantidadActual=actual;
}

void Material::setCantidadMinima(int min){
    cantidadMinima=min;
}

void Material::setCantidadMaxima(int max){
    cantidadMaxima=max;
}

// Metodos get
int Material::getCodigoMaterial(){
    return codigoMaterial;
}

int Material::getCantidadActual(){
    return cantidadActual;
}

int Material::getCantidadMinima(){
    return cantidadMinima;
}

int Material::getcantidadMaxima(){
    return cantidadMaxima;
}

Material Material::operator+(int n){
    cantidadActual+=n;
    return *this;
}

Material Material::operator-(int n){
    cantidadActual-=n;
    return *this;
}

void Material::verificarEstadoDeposito(){
    if(cantidadActual<cantidadMinima){
        cout<<"La cantidad actual es menor a la cantidad minima"<<endl;
    }else if(cantidadActual>cantidadMaxima){
        cout<<"La cantidad actual es mayor a la cantidad maxima"<<endl;
    }else{
        cout<<"La cantidad actual esta dentro de los limites"<<endl;
    }
}