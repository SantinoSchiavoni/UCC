/*
La primera línea de entrada contiene un entero n, que representa el número de problemas
en el concurso. Luego, hay n líneas que contienen tres enteros cada una. Cada entero
puede ser 0 o 1. El primer entero representa la decisión de Javier, el segundo la de Kevin, y
el tercero la de Mateo. Si el entero vale 0, significa que ese integrante del equipo no está de
acuerdo con la solución. Por el contrario, si el entero vale 1, significa que ese integrante del
equipo sí está de acuerdo con la solución
*/

#include<iostream>
using namespace std;

int func_problema(int problemas){
    int acumulador_respuesta=0, a, b, c, suma_rta=0, contador;

    for(int i=0; i<problemas;i++){
        cout<<"Ingrese las Respuestas de Javier, Kevin y Mateo"<<endl;
        cin>>a>>b>>c;
        suma_rta=a+b+c;
        if(suma_rta>=2){
            contador++;
        }
    suma_rta=0;
    }
    return contador;
}

int main(){
    int cant_problemas;
    cout<<"Ingrese la cantidad de problemas"<<endl;
    cin>>cant_problemas;
    cout<<func_problema(cant_problemas)<<endl;
    return 0;
}