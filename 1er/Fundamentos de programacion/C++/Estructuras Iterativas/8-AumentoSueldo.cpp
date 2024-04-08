/*
En una empresa se decidió aumentar en un 12% el sueldo de aquellos empleados que cobren menos de $18.000. 
El programa debe permitir ingresar el sueldo del empleado 
y si corresponde mostrar el mensaje “El empleado tiene un aumento. Su nuevo sueldo es:”.
*/
#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    float sueldoAnt, sueldoNu;
    bool i=1;
    //Datos
    cout<<"Ingrese su sueldo"<<endl;
    do{
        cout<<"Sueldo: $ "; cin>>sueldoAnt;
        if (sueldoAnt<18000) {
           sueldoNu = sueldoAnt*1.12;
           cout<<"El empleado tiene un aumento. Su nuevo sueldo es: $"<<sueldoNu<<endl;
        } else {
            cout<<"El empleado no tiene un aumento"<<endl;
        }
     cout<<"Desea continuar? 1:Si, 0:No"<<endl;
     cin>>i;
    } while (i==1);
    cout<<"Muchas gracias por usar el software"<<endl;
    return 0;
}