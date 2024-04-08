#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    //Igualamos a cero las variables para poder modificarlas y ademas todos los datos ingresados seran mayor que 0
    int total_jugadores;
    string alias_ingresado, alias_punto1, alias_punto5;

    int asesinatos_ingresado;
    int asesinatos_pivot=0;

    int armas_ingresado;
    int armas_pivot=0;

    int bajas_ingresado;
        float bajas_pivot=0;
        float acumulador_total_bajas=0;
        float acumulador_bajas3 = 0;
        float porcentaje_bajas3;

    int edad_ingresado,edad4;
    int edad_pivot_viejo=0;
    int edad_pivot_joven=200;

    float horas_ingresadas,tiempo_minutos,tiempo_punto2;

    bool bandera;

    //Obtencion de datos
    cout<<"Ingrese el total de jugadores"<<endl;
    cout<<"Jugadores: "; cin>>total_jugadores;
    cout<<"Ingrese los datos necesarios para el programa"<<endl;
    for (int i = 1; i <= total_jugadores; i++)
    {
        //obtencion de datos necesarios
        cout<<"Datos del jugador numero: "<<i<<endl;
        cout<<"Alias: ";cin>>alias_ingresado;
        cout<<"Cantidad de asesinatos: ";cin>>asesinatos_ingresado;
        cout<<"Armas utilizadas: ";cin>>armas_ingresado;
        cout<<"Cuantas veces fue asesinado: ";cin>>bajas_ingresado;
        cout<<"Edad del jugador: ";cin>>edad_ingresado;
            edad_pivot_viejo=edad_ingresado;
        cout<<"Cuantas horas ha jugado: ";cin>>horas_ingresadas;
            tiempo_minutos=horas_ingresadas*60;

        //Estructura para calculo de las preguntas a responder segun solicitud
        //Acumuladores totales
        acumulador_total_bajas = acumulador_total_bajas + bajas_ingresado;
        //Punto 1 Alias jugador con mas asesinatos
        if(asesinatos_ingresado>asesinatos_pivot){
            asesinatos_pivot=asesinatos_ingresado; 
            alias_punto1=alias_ingresado;
        }
        //Punto 2 Minutos jugados jugador mas asesinado
        if(bajas_ingresado>bajas_pivot){
            tiempo_punto2=tiempo_minutos;
        }
        //Punto 3 Porcentaje de muerte entre los jugadores entre 200' y 300' min jugados
        if(tiempo_minutos>200){
            if(tiempo_minutos<300){
                acumulador_bajas3 = acumulador_bajas3 + bajas_ingresado;
                porcentaje_bajas3 = ((acumulador_bajas3)/(acumulador_total_bajas))*100;
            }
        }
        //Punto 4 cantidad de asesinatos jugador mas viejo
        if(edad_ingresado>edad_pivot_viejo){
            edad_pivot_viejo = edad_ingresado;
            edad4 = edad_pivot_viejo;
        }
        //Punto 5 alias del mas joven
        if(edad_ingresado<edad_pivot_joven){
            edad_pivot_joven=edad_ingresado;
            alias_punto5=alias_ingresado;
        }

    cout<<endl;
    }
    cout<<"Punto 1: "<<alias_punto1<<endl;
    cout<<"Punto 2: "<<tiempo_punto2<<endl;
    cout<<"Punto 3: "<<porcentaje_bajas3<<endl;
    cout<<"Punto 4: "<<edad4<<endl;
    cout<<"Punto 5: "<<alias_punto5<<endl;

    return 0;
}