/*
Muestre por pantalla la tabla de multiplicación del número que ingrese el usuario.
Para definir hasta que número desea que muestre la tabla de multiplicación
el usuario también deberá ingresar este valor. 
La tabla de multiplicación a mostrar debe empezar en la multiplicación por 1.
*/
#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    int numTabla,numF; 
    int numVeces=0;
    int i=0;
    //Datos
    cout<<"Ingresa el numero para realizar la tabla y hasta que numero multiplicar"<<endl;
    //Logica
    cout<<"Numero Tabla: ";cin>>numTabla;
    cout<<"Hasta: "; cin>>numVeces;
        while(numVeces>=i){
            i++;
            numF=numTabla*i;
            cout<<numTabla<<" * "<<i<<" = "<<numF<<endl;
        }
    return 0;
}