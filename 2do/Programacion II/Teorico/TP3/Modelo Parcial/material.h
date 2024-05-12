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
using namespace std;

class Material {
    private:
        int codigoMaterial;
        int cantidadActual;
        int cantidadMinima;
        int cantidadMaxima;
    public:
        // Constructor
        Material();
        Material(int codigoMaterial, int cantidadActual, int cantidadMinima, int cantidadMaxima);
        // Getters y Setters
        int getCodigoMaterial();
        void setCodigoMaterial(int codigoMaterial);
        int getCantidadActual();
        void setCantidadActual(int cantidadActual);
        int getCantidadMinima();
        void setCantidadMinima(int cantidadMinima);
        int getcantidadMaxima();
        void setCantidadMaxima(int cantidadMaxima);
        // Métodos
        Material operator+(int cantidad);
        Material operator-(int cantidad);
        void verificarEstadoDeposito();
};