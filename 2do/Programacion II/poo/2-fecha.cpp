/*
Construya una clase fecha que contenga los siguientes atributos entero:
dia, mes, año. La clase debe tener los siguientes métodos:
fecha actual, fecha ayer, fecha mañana
*/

#include <iostream>
using namespace std;

class fecha{
    private:
        int dia, mes, anio;
    public:
        fecha(int d,int m,int a);
        void fechaActual();
        void fechaAyer();
        void fechaManana();
};

fecha::fecha(int d,int m,int a){
    dia = d;
    mes = m;
    anio = a;
}

void fecha::fechaActual(){
    cout << "Fecha actual: " << dia << "/" << mes << "/" << anio << endl;
}

void fecha::fechaAyer(){
    if(dia == 1){
        dia = 30;
        if(mes == 1){
            mes = 12;
            anio--;
        }else{
            mes--;
        }
    }else{
        dia--;
    }
    cout << "Fecha ayer: " << dia << "/" << mes << "/" << anio << endl;
}

void fecha::fechaManana(){
    if(dia == 30){
        dia = 1;
        if(mes == 12){
            mes = 1;
            anio++;
        }else{
            mes++;
        }
    }else{
        dia++;
    }
    cout << "Fecha mañana: " << dia << "/" << mes << "/" << anio << endl;
}

int main(){
    int d,m,a;
    cout << "Ingrese la fecha (dia, mes, año): ";
    cin >> d >> m >> a;
    fecha f(d,m,a);

    f.fechaActual();
    f.fechaAyer();
    f.fechaManana();
}