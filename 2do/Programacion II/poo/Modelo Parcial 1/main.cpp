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

int main(){
    string modelo, marca, banda;
    int ano_fabricacion, cantidad_chips;
    float capacidad, voltaje, espacio;
    Bateria bat1(100, 5, 10);
    Celular c1("s23", "Samsung", "5G", 2020, 2, bat1);

/*
    cout << "Ingrese el modelo del celular: ";
    cin >> modelo;
    c1.setModelo(modelo);
    cout<< "Ingrese la marca del celular: ";
    cin >> marca;
    c1.setMarca(marca);
    cout << "Ingrese la banda del celular: ";
    cin >> banda;
    c1.setBanda(banda);
    cout << "Ingrese el año de fabricacion del celular: ";
    cin >> ano_fabricacion;
    c1.setAnoFabricacion(ano_fabricacion);
    cout << "Ingrese la cantidad de chips del celular: ";
    cin >> cantidad_chips;
    c1.setCantidadChips(cantidad_chips);
    cout << "Ingrese la capacidad de la bateria: ";
    cin >> capacidad;
    bat1.setCapacidad(capacidad);
    cout << "Ingrese el voltaje de la bateria: ";
    cin >> voltaje;
    bat1.setVoltaje(voltaje);
    cout << "Ingrese el espacio de la bateria: ";
    cin >> espacio;
    bat1.setEspacio(espacio);
    cout<<""<<endl;

*/
    c1.llamar();
    c1.mandarMensaje();
    c1.mostrarEspecificaciones();
}
