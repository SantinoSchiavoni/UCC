/**
Se desea calcular el salario de un operario, en base a las horas trabajadas quincenalmente
Si la cantidad de horas <=75, percibe $80/hora
Si la cantidad de horas>75, percibe 1,5 veces más las horas excedentes.
Del monto calculado se deben realizar los descuentos por aportes e impuestos, con el siguiente criterio:
Si el monto total <=3000, dto del 12%
Si 3000<total<=5000, dto del 20%
Si total>5000, dto. del 30%
*/

#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    int horasTrabajadas, horasExtra;
    float sueldo;
    //Datos
    cout <<"Ingresa las horas trabajadas por semana"<< endl;
    cin>>horasTrabajadas;
    //sueldo x hora
        if(horasTrabajadas<=75) {
            sueldo = horasTrabajadas * 80;
         }
         else {
            horasExtra = horasTrabajadas - 75;
            sueldo = ((horasTrabajadas-horasExtra)* 80 ) + (horasExtra * (80*1.5));
         }
    //Sueldo neto con dto
        if(sueldo<=3000){
            sueldo *= 0.88;
        }
        else if (sueldo<=5000){
            sueldo *= 0.80;
        }
        else{
            sueldo *= 0.70;
        }
        cout << "su sueldo es de: $ " << sueldo << endl;
        return 0;

}
