/*Escriba un programa que permita al usuario elegir entre 2 opciones. 
Deben existir 3 funciones: menu, convertir_polar_cartesiano, convertir_cartesiano_polar.
Convertir de coordenadas de polares a cartesianas. Recuerde que x=r×cos(θ) y y=r×sen(θ)
Convertir de coordenadas de cartesianas a polares. Recuerde que r=raiz(x^2+y^2) y =atan(y/x)*/

#include<iostream>
#include<cmath>
using namespace std;

const float pi = 3.14159265;

float convertir_polar_cartesiano(float hipotenusa_generico, float angulo_generico){ //Funcion convertir de coord polar a cartesiana
    float alfa, catetoAdy, catetoOp;

    catetoAdy = hipotenusa_generico * cos(angulo_generico);
    catetoOp = hipotenusa_generico * sin(angulo_generico);

    cout << "Conversion a coordenadas cartesianas"<<endl;
    cout <<"Cateto adyacente: "<<catetoAdy<<endl;
    cout <<"Cateto Opuesto: "<<catetoOp<<endl;
}

float convertir_cartesiano_polar(float cateto_ady_generico, float cateto_op_generico){ //Funcion convertir de coord cartesiana a polar
    float alfa, hipotenusa, grados;

    alfa = atan(cateto_op_generico/cateto_ady_generico);
    hipotenusa = sqrt((pow(cateto_ady_generico,2))+(pow(cateto_op_generico,2)));
    grados = (180 * alfa)/pi;

	cout << "Conversion a coordenadas polares: " << "(" << hipotenusa << "," << grados << ")" << endl;
}

int main(){ //Funcion Ppal
    float catetoAdy, catetoOp, hipotenusa, angulo;
    bool conversion;

    cout<<"Ingresa 1 para convertir de Coord. polar a cartesianas"<<endl;
    cout<<"Ingrese 0 para convertir de Coord. cartesiana a polar"<<endl;
    cout<<"Ingrese su numero: "; cin>>conversion;

    if(conversion){
        cout<<"Ingrese los valores"<<endl;
        cout<<"Hipotenusa: ";cin>>hipotenusa;
        cout<<"Angulo: ";cin>>angulo;
        cout<<convertir_polar_cartesiano(hipotenusa,angulo)<<endl;
    } else{
        cout<<"Ingrese los valores"<<endl;
        cout<<"Cateto Adyacente: ";cin>>catetoAdy;
        cout<<"Cateto Opuesto: ";cin>>catetoOp;  
        cout<<convertir_cartesiano_polar(catetoAdy,catetoOp)<<endl;
    }

    return 0;
}