/*
Calcule el aumento de sueldo de para un grupo de empleados 
teniendo en cuenta el siguiente criterio: 
Si el sueldo es inferior a 18000,aumento del 15%
si es igual o mayor a 18000, aumento del 12%.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    bool i=1;
    float sueldoA,sueldoN;
    //Logica
    cout<<"Ingrese su sueldo"<<endl;
    do{
        cout<<"Sueldo: $ "; cin>>sueldoA;
        if(sueldoA<18000){
           sueldoN = sueldoA * 1.15;
           cout<<"El empleado tiene un aumento del 15%. Su nuevo sueldo es: $"<<sueldoN<<endl;
        } else if(sueldoA>=18000){
            sueldoN = sueldoA * 1.12;
            cout<<"El empleado tiene un aumento del 12%. Su nuevo sueldo es: $"<<sueldoN<<endl;
        }
        cout<<"Desea continuar? 1:Si, 0:No"<<endl;
        cin>>i;
    }while(i==1);
    cout<<"Muchas gracias por usar el software"<<endl;
    return 0;
}