#include<iostream>
using namespace std;

int main(){
    //Declarar Variables
    int total_jugadores;
    int contador13 = 0;
    float contador14 = 0;

    string alias_ingresado, alias_punto1, alias_punto5, alias_punto9, alias_punto15;

    int asesinatos_ingresado;
    int asesinatos_punto4=0;
    int asesinatos_punto7=0;
    int asesinatos_pivot=0;
    float porcentaje_punto14=0;

    int armas_ingresado;
    int armas_pivot=0;
    float armas_punto15=0;

    int bajas_ingresado;
    float bajas_pivot=0;
    float acumulador_total_bajas=0;
    float acumulador_bajas3 = 0;
    float porcentaje_bajas3=0;
    float promedio_bajas6=0;
    float contador8 = 0;
    float acumulador_bajas8 = 0;
    float promedio_bajas8=0;
    float acumulador_bajas10=0;
    float contador10 = 0;
    float promedio_bajas10=0;
    float acumulador_bajas11 = 0;
    float porcentaje_bajas11 = 0;

    int edad_ingresado;
    int edad_pivot_viejo=0;
    int edad_pivot5=0;
    int edad_punto7=0;

    float horas_ingresadas,tiempo_minutos;
    float tiempo_punto2=0;
    float acumulador_minutos12 = 0;

    //Obtencion de datos
    cout<<"Ingrese el total de jugadores"<<endl;
    cout<<"Jugadores: "; cin>>total_jugadores;
    cout<<endl;
    cout<<"Ingrese los datos necesarios para el programa"<<endl;
    for (int i = 1; i <= total_jugadores; i++)
    {
        //Obtencion de datos necesarios dentro del For
        cout<<"Datos del jugador numero: "<<i<<endl;
        cout<<"Alias: ";cin>>alias_ingresado;
        cout<<"Cantidad de asesinatos: ";cin>>asesinatos_ingresado;
        cout<<"Armas utilizadas: ";cin>>armas_ingresado;
        cout<<"Cuantas veces fue asesinado(n de bajas): ";cin>>bajas_ingresado;
        cout<<"Edad del jugador: ";cin>>edad_ingresado;
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
        //Punto 2 Minutos jugados jugador mas asesinado(bajas)
        if(bajas_ingresado>bajas_pivot){
            tiempo_punto2=tiempo_minutos;
        }
        //Punto 3 Porcentaje de muertes entre los jugadores entre 200' y 300' min jugados (bajas)
        if(tiempo_minutos>=200 && tiempo_minutos<=300){
            acumulador_bajas3 = acumulador_bajas3 + bajas_ingresado;
            porcentaje_bajas3 = ((acumulador_bajas3)/(acumulador_total_bajas))*100;
        }
        //Punto 4 cantidad de asesinatos jugador mas viejo
        if(edad_ingresado>edad_pivot_viejo){
            edad_pivot_viejo = edad_ingresado;
            asesinatos_punto4=asesinatos_ingresado;
        }
        //Punto 5 alias del mas joven
        if(i==1){
            edad_pivot5 = edad_ingresado;
            alias_punto5 = alias_ingresado;
        }
        if(edad_ingresado<edad_pivot5){
            edad_pivot5=edad_ingresado;
            alias_punto5=alias_ingresado;
        }
        //Punto 6 cant de muertes en promedio durante el juego
        promedio_bajas6 = acumulador_total_bajas / total_jugadores;

        //Punto 7 edad del jugador que menos asesinatos tuvo
        if(i==1){
            asesinatos_punto7 = asesinatos_ingresado;
            edad_punto7=edad_ingresado;
        }

        if(asesinatos_ingresado<asesinatos_punto7){
            asesinatos_punto7=asesinatos_ingresado;
            edad_punto7=edad_ingresado;
        }

        //Punto 8 promedio de bajas que tuvieron los jugadores entre 15 y 20 años
        if(edad_ingresado>=15 && edad_ingresado<=20){
            contador8++;
            acumulador_bajas8 = acumulador_bajas8 + bajas_ingresado;
            promedio_bajas8 = ((acumulador_bajas8)/(contador8));
        }

        //Punto 9 alias del jugador que mas armas usó
        if(armas_ingresado>armas_pivot){
            armas_pivot=armas_ingresado;
            alias_punto9=alias_ingresado;
        }
        //Punto 10 n de bajas promedio en menores de 20
        if(edad_ingresado<20){
            contador10++;
            acumulador_bajas10 = acumulador_bajas10 + bajas_ingresado;
            promedio_bajas10 = ((acumulador_bajas10)/(contador10));
        }
        //Punto 11 porcentaje de bajas de jugadores entre 18 y 22 años
        if(edad_ingresado<=22 && edad_ingresado>=18){
            acumulador_bajas11 = acumulador_bajas11 + bajas_ingresado;
        }
        //Punto 12 acumulo de minutos de todos los jugadores con mas de 30 asesinatos
        if(asesinatos_ingresado>30){
            acumulador_minutos12 = acumulador_minutos12 + tiempo_minutos;
        }
        //Punto 13 Cantidad de jugadores con mas bajas que asesinatos
        if(bajas_ingresado>asesinatos_ingresado){
            contador13++;
        }
        //Punto 14 Porcentaje de jugadores con mas asesinatos que bajas
        if(asesinatos_ingresado>bajas_ingresado){
            contador14++;
            porcentaje_punto14 = ((contador14)/(total_jugadores))*100;
        }
        //Punto 15 Alias del jugador que menos armas usó
        if(i==1){
            armas_punto15 = armas_ingresado;
            alias_punto15 = alias_ingresado;
        }
        if(armas_ingresado<armas_punto15){
            alias_punto15 = alias_ingresado;
        }
    cout<<endl;
    }
    //Este tuve que sacarlo afuera del for porque es el que daba error sin razon, punto 11
        porcentaje_bajas11=((acumulador_bajas11)/(acumulador_total_bajas))*100;
        
    cout<<"1)Alias del jugador que asesino mas enemigos: "<<endl;
        cout<<"--> "<<alias_punto1<<endl;
    cout<<"2)Minutos de juego que tuvo el jugador que mas bajas le propinaron: "<<endl;
        cout<<"--> "<<tiempo_punto2<<" [minuto/s]"<<endl;
    cout<<"3)Porcentaje de muertes de los jugadores que tuvieron entre 200 y 300 minutos jugando: "<<endl;
        cout<<"--> "<<porcentaje_bajas3<<" %"<<endl;
    cout<<"4)Cantidad de asesinatos que tuvo el jugador de mayor edad: "<<endl;
        cout<<"--> "<<asesinatos_punto4<<" [asesinato/s]"<<endl;
    cout<<"5)Alias del jugador de menor edad: "<<endl;
        cout<<"--> "<<alias_punto5<<endl;
    cout<<"6)Cantidad de muertes en promedio durante el juego: "<<endl;
        cout<<"--> "<<promedio_bajas6<<endl;
    cout<<"7)Edad del jugador que menos asesinatos tuvo durante el juego: "<<endl;
        cout<<"--> "<<edad_punto7<<endl;
    cout<<"8)Promedio de bajas que tuvieron los jugadores entre 15 y 20 anos: "<<endl;
        cout<<"--> "<<promedio_bajas8<<endl;
    cout<<"9)Alias del jugador q mas armas utilizo: "<<endl;
        cout<<"--> "<<alias_punto9<<endl;
    cout<<"10)Numero de bajas promedio en jugadores menores de 20 anos: "<<endl;
        cout<<"--> "<<promedio_bajas10<<endl;
    cout<<"11)Porcentaje de bajas de jugadores entre 18 y 22 anos: "<<endl;
        cout<<"--> "<<porcentaje_bajas11<<" %"<<endl;
    cout<<"12)Acumulo de minutos de todos los jugadores con mas de 30 asesinatos: "<<endl;
        cout<<"--> "<<acumulador_minutos12<<" [minutos]"<<endl;
    cout<<"13)Cantidad de jugadores que tuvieron mas bajas que asesinatos: "<<endl;
        cout<<"--> "<<contador13<<endl;
    cout<<"14)Porcentaje de jugadores que tuvieron mas asesinatos que bajas: "<<endl;
        cout<<"--> "<<porcentaje_punto14<<" %"<<endl;
    cout<<"15)Alias del jugador que menos armas utilizo: "<<endl;
        cout<<"--> "<<alias_punto15<<endl;
    return 0;
}