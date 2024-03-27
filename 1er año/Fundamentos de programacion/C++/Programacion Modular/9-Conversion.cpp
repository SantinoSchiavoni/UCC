/*La función debe recibir como parámetros un número y la unidad. 
Debe ser capaz de convertir 
Kilómetros a millas, metros a yardas, metros a pies, centímetros a pulgadas, litros a galones y celcius a farenheit. 
Debe imprimir por pantalla el resultado de esta conversión.
*/

#include<iostream>
using namespace std;

float conversion(float numero, string unidad){ //Funcion de conversion de unidades
    const double km_millas = 0.621;
    const double m_yd = 1.093;
    const double m_ft = 3.28;
    const double cm_in = 0.393;
    const double lt_gal = 0.264;

    if(unidad == "km" || unidad == "kilometro" || unidad == "kilometros"){
        double millas = numero * km_millas;
        cout<<"Su valor en millas es: "<<millas<<" [mi]"<<endl;

    } else if(unidad == "m"|| unidad == "metro" || unidad == "metros"){
        double yardas = numero * m_yd;
        double pies = numero * m_ft;
        cout<<"Su valor en yardas es: "<<yardas<<" [yd]"<<endl;
        cout<<"Su valor en pies es: "<<pies<<" [ft]"<<endl;

    } else if(unidad == "cm"|| unidad == "centimetro" || unidad == "centimetros"){
        double pulgadas=numero*cm_in;
        cout<<"Su valor en pulgadas es: "<<pulgadas<<" [in]"<<endl;

    } else if(unidad == "lt"|| unidad == "litro" || unidad == "litros"){
        double galones = numero*lt_gal;
        cout<<"Su valor en galones es: "<<galones<<" [gal]"<<endl;
    }
}

int main(){ //Funcion PPal
    float numero2;
    string unidad2;

    cout<<"Ingrese el valor y su unidad"<<endl;
    cout<<"Valor: ";cin>>numero2;
    cout<<"Unidad: ";cin>>unidad2;

    cout<<conversion(numero2,unidad2)<<endl;
    return 0;
}