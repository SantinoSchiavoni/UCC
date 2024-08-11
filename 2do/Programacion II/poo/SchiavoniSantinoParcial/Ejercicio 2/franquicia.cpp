#include <iostream>
#include"franquicia.h"
using namespace std;

Gerente::Gerente(){}

Gerente::Gerente(string _nombre_gerente, int _dni){
    nombre_gerente=_nombre_gerente;
    dni=_dni;
}

void Gerente::setNombreGerente(string _nombre_gerente){
    nombre_gerente=_nombre_gerente;
}

void Gerente::setDni(int _dni){
    dni=_dni;
}

string Gerente::getNombreGerente(){
    return nombre_gerente;
}

int Gerente::getDni(){
    return dni;
}

Franquicia::Franquicia(){}

Franquicia::Franquicia(string _nombre_franquicia){
    nombre_franquicia=_nombre_franquicia;
}

void Franquicia::setNombreFranquicia(string _nombre_franquicia){
    nombre_franquicia=_nombre_franquicia;
}

string Franquicia::getNombreFranquicia(){
    return nombre_franquicia;
}


Sucursal::Sucursal(){}

Sucursal::Sucursal(string _nombre_franquicia, int _codigo, string _direccion, string _nombre_gerente, int _dni):Franquicia(_nombre_franquicia){
    codigo=_codigo;
    direccion=_direccion;
}

void Sucursal::setCodigo(int _codigo){
    codigo=_codigo;
}

void Sucursal::setDireccion(string _direccion){
    direccion=_direccion;
}

int Sucursal::getCodigo(){
    return codigo;
}

string Sucursal::getDireccion(){
    return direccion;
}
