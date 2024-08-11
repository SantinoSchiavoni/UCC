#include <iostream>
#include <string.h>
using namespace std;


class Bateria{
    private:
        float capacidad;
        float voltaje;
        float espacio;
    public:
        Bateria();
        Bateria(float capacidad, float voltaje, float espacio);

        void setCapacidad(float capacidad);
        void setVoltaje(float voltaje);
        void setEspacio(float espacio);

        float getCapacidad();
        float getVoltaje();
        float getEspacio();
};

class Celular{
    private:
        string modelo;
        string marca;
        string banda;
        int ano_fabricacion;
        int cantidad_chips;
        Bateria bat1;
    public:
        Celular();
        Celular(string modelo, string marca, string banda, int ano_fabricacion, int cantidad_chips, float capacidad, float voltaje, float espacio);

        void setModelo(string modelo);
        void setMarca(string marca);
        void setBanda(string banda);
        void setAnoFabricacion(int ano_fabricacion);
        void setCantidadChips(int cantidad_chips);

        string getModelo();
        string getMarca();
        string getBanda();
        int getAnoFabricacion();
        int getCantidadChips();

        void llamar();
        void mandarMensaje();
        void mostrarEspecificaciones();

};

Celular::Celular(){}

Celular::Celular(string mod, string mar, string ban, int ano, int cant, float cap, float vol, float esp){
    modelo = mod;
    marca = mar;
    banda = ban;
    ano_fabricacion = ano;
    cantidad_chips = cant;
    bat1.setCapacidad(cap);
    bat1.setVoltaje(vol);
    bat1.setEspacio(esp);
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

Bateria::Bateria(){}

Bateria::Bateria(float cap, float vol, float esp){
    capacidad = cap;
    voltaje = vol;
    espacio = esp;
}


void Celular::mostrarEspecificaciones(){
    cout << "Modelo: " << modelo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Banda: " << banda << endl;
    cout << "Año de fabricacion: " << ano_fabricacion << endl;
    cout << "Cantidad de chips: " << cantidad_chips << endl;
    cout << "Especificaciones de la bateria: " << endl;
    cout << "Capacidad: " << bat1.getCapacidad() << " mAh" << endl;
    cout << "Voltaje: " << bat1.getVoltaje() << " V" << endl;
    cout << "Espacio: " << bat1.getEspacio() << " mm^2" << endl;
}

int main(){
    Celular c1;
    Bateria b1;
    string modelo, marca, banda;
    int ano_fabricacion, cantidad_chips;
    float capacidad, voltaje, espacio;

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
    b1.setCapacidad(capacidad);
    cout << "Ingrese el voltaje de la bateria: ";
    cin >> voltaje;
    b1.setVoltaje(voltaje);
    cout << "Ingrese el espacio de la bateria: ";
    cin >> espacio;
    b1.setEspacio(espacio);
    cout<<""<<endl;

    void llamar();
    void mandarMensaje();
    void mostrarEspecificaciones();




}
