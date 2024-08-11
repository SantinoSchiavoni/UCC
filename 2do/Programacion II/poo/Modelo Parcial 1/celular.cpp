/*
Desarrolle la clase "celular", con los siguientes atributos:
Modelo, marca, banda, año de fabricacion, cantidad de chips
que tenga las siguientes acciones:
llamar();
mandar_mensaje();
mostrar_especificaciones();
Componer con la clase bateria, que tenga los siguientes atributos:
capacidad, voltaje, espacio
*/

#include <iostream>
#include "celular.h"
#include <string.h>
using namespace std;

Bateria::Bateria(){}

Bateria::Bateria(float cap, float vol, float esp){
    capacidad = cap;
    voltaje = vol;
    espacio = esp;
}

void Bateria::setCapacidad(float cap){
    capacidad = cap;
}

void Bateria::setVoltaje(float vol){
    voltaje = vol;
}

void Bateria::setEspacio(float esp){
    espacio = esp;
}

float Bateria::getCapacidad(){
    return capacidad;
}

float Bateria::getVoltaje(){
    return voltaje;
}

float Bateria::getEspacio(){
    return espacio;
}

Celular::Celular(){}

Celular::Celular(string mod, string mar, string ban, int ano, int cant, Bateria b1){
    modelo = mod;
    marca = mar;
    banda = ban;
    ano_fabricacion = ano;
    cantidad_chips = cant;
    bat1 = b1;
}


void Celular::setModelo(string mod){
    modelo = mod;
}

void Celular::setMarca(string mar){
    marca = mar;
}

void Celular::setBanda(string ban){
    banda = ban;
}

void Celular::setAnoFabricacion(int ano){
    ano_fabricacion = ano;
}

void Celular::setCantidadChips(int cant){
    cantidad_chips = cant;
}

string Celular::getModelo(){
    return modelo;
}

string Celular::getMarca(){
    return marca;
}

string Celular::getBanda(){
    return banda;
}

int Celular::getAnoFabricacion(){
    return ano_fabricacion;
}

int Celular::getCantidadChips(){
    return cantidad_chips;
}

void Celular::llamar(){
    long numero;
    cout<<"Ingrese el numero a llamar: ";
    cin>>numero;
    cout << "Llamando..." << endl;
}

void Celular::mandarMensaje(){
    string mensaje;
    cout<<"ingrese el mensaje a enviar: ";
    cin>>mensaje;
    cout << "Mensaje enviado" << endl;
}


void Celular::mostrarEspecificaciones(){
    cout << "Modelo: " << modelo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Banda: " << banda << endl;
    cout << "Año de fabricacion: " << ano_fabricacion << endl;
    cout << "Cantidad de chips: " << cantidad_chips << endl;
    cout << "Especificaciones de la bateria: " << endl;
    cout << "Capacidad: " << bat1.getCapacidad() << " [mAh]" << endl;
    cout << "Voltaje: " << bat1.getVoltaje() << " [V]" << endl;
    cout << "Espacio: " << bat1.getEspacio() << " [mm^2]" << endl;
}