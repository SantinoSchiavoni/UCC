#include <iostream>
using namespace std;

class Gerente{
    private:
        string nombre_gerente;
        int dni;
    public:
        Gerente();
        Gerente(string nombre_gerente, int dni);

        void setNombreGerente(string nombre_gerente);
        void setDni(int dni);
        string getNombreGerente();
        int getDni();
};

class Franquicia{
    private:
        string nombre_franquicia;
    public: 
        Franquicia();
        Franquicia(string nombre_franquicia);

        void setNombreFranquicia(string nombre_franquicia);
        string getNombreFranquicia();

};

class Sucursal:public Franquicia{
    private:
        int codigo;
        string direccion;
        Gerente g1;
    public:
        Sucursal();
        Sucursal(string nombre_franquicia, int codigo, string direccion, string nombre_gerente, int dni);
    
        void setCodigo(int codigo);
        void setDireccion(string direccion);
        int getCodigo();
        string getDireccion();
};