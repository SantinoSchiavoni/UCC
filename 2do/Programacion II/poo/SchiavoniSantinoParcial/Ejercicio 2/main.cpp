#include <iostream>
#include"franquicia.h"
using namespace std;

int main(){
    string nombre_gerente;
    int dni;
    string nombre_franquicia;
    int codigo;
    string direccion;

    Franquicia f1(nombre_franquicia);
    Gerente g1(nombre_gerente,dni);
    Sucursal s1(nombre_franquicia, codigo, direccion, nombre_gerente, dni);

    cout<<"Cargar Datos"<<endl;
    cout<<"Nombre Franquicia: "; cin>>nombre_franquicia; f1.setNombreFranquicia(nombre_franquicia);
    cout<<"Codigo Sucursal: "; cin>>codigo;
    cout<<"Direccion: "; cin>>direccion;s1.setDireccion(direccion);
    cout<<"Nombre Gerente: "; cin>>nombre_gerente; g1.setNombreGerente(nombre_gerente);
    cout<<"Dni Gerente: "; cin>>dni; g1.setDni(dni);
    cout<<endl;
    
    int resto,ninvertir;
    ninvertir=codigo%10; //tomo el resto
    while (codigo>10) { //mientras sea mayor a 10
        codigo=codigo/10; //divido por 10
        resto=codigo%10; //tomo el resto
        ninvertir=(ninvertir*10)+resto; 
    }

    s1.setCodigo(ninvertir);

    cout<<"Nombre Franquicia: "<<f1.getNombreFranquicia()<<endl;
    cout<<"Codigo Sucursal: "<<s1.getCodigo()<<endl;
    cout<<"Direccion: "<<s1.getDireccion()<<endl;
    cout<<"Nombre Gerente: "<<g1.getNombreGerente()<<endl;
    cout<<"Dni Gerente: "<<g1.getDni()<<endl;
}