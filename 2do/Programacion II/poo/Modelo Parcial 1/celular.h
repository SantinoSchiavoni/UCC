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
        Celular(string modelo, string marca, string banda, int ano_fabricacion, int cantidad_chips, Bateria bat1);

        void setModelo(string modelo);
        void setMarca(string marca);
        void setBanda(string banda);
        void setAnoFabricacion(int ano_fabricacion);
        void setCantidadChips(int cantidad_chips);
        void setBateria(Bateria bat1);

        string getModelo();
        string getMarca();
        string getBanda();
        int getAnoFabricacion();
        int getCantidadChips();
        Bateria getBateria();


        void llamar();
        void mandarMensaje();
        void mostrarEspecificaciones();

};
