/*
Ingresar: Nombre, hora de llegada, hora de salida.
Calcular c/fanatico: 
1- tiempo total en minutos
2-Cual fue la primera pelicula que logro ver, si no logro ver ninguna, indiquelo
Para todos:
3-Porcentaje de fanaticos que estuvieron presentes eb la proyeccion de Amanecer Parte 2
4-Tiempo promedio en minutos que duraron esperando los fanaticos el inicio del maraton
5-Nombre del mayor fanatico de esta saga

La saga comenzó a las 12:00hs (720min)
cada peli dura 144min
*/

#include <iostream>
#include <string.h>
using namespace std;


struct fanaticos{
    char nombre[20];
    int hora_llegada;
    int min_llegada;
    int hora_salida;
    int min_salida;
    int total_minutos;
};

void agregar(fanaticos x[]){
    for(int i=0;i<10;i++){
        cout<<"Ingrese el nombre del fanatico "<<i+1<<endl;
        cin.ignore();
        cin.getline(x[i].nombre,20,'\n');
        cout<<"Ingrese su hora de llegada"<<endl;
        cout<<"Horas: ";
        cin>>x[i].hora_llegada;
        cout<<"Minutos: ";
        cin>>x[i].min_llegada;
        cout<<"Ingrese su hora de salida"<<endl;
        cout<<"Horas: ";
        cin>>x[i].hora_salida;
        cout<<"Minutos: ";
        cin>>x[i].min_salida;
    }

}

void tiempo_fan(fanaticos x[]){
    int aux1=0, aux2=0;
    for(int i=0;i<10;i++){
        aux1=x[i].hora_llegada*60;
        aux2=x[i].hora_salida*60;
        x[i].total_minutos=(aux2+x[i].min_salida)-(aux1+x[i].min_llegada);
        aux1=0;
        aux2=0;
        cout<<"->El tiempo total del fanatico "<<x[i].nombre<<" fue de "<<x[i].total_minutos<<" minutos"<<endl;
    }
}

void primer_pelicula(fanaticos x[]){
    int aux1=0;
    int aux2=0;
        for(int i=0;i<10;i++){
            aux1=(x[i].hora_llegada*60)+x[i].min_llegada;
            aux2=(x[i].hora_salida*60)+x[i].min_salida;
            cout<<"------------------------------"<<endl;
            if(aux1<=576 || aux2<=576){
                cout<<"-->El fanatico "<<x[i].nombre<<" no logro ver ninguna pelicula"<<endl;
            }
            else if(aux1<=720 || aux1<=863){
                cout<<"-->El fanatico "<<x[i].nombre<<" logro ver la primera pelicula"<<endl;
            }
            else if(aux1<=864 || aux1<=1007){
                cout<<"-->El fanatico "<<x[i].nombre<<" logro ver la segunda pelicula"<<endl;
            }
            else if(aux1<=1008 || aux1<=1151){
                cout<<"-->El fanatico "<<x[i].nombre<<" logro ver la tercera pelicula"<<endl;
            }
            else if(aux1<=1152 || aux1<=1295){
                cout<<"-->El fanatico "<<x[i].nombre<<" logro ver la cuarta pelicula"<<endl;
            }
            else if(aux1<=1296 || aux1<=1440){
                cout<<"-->El fanatico "<<x[i].nombre<<" logro ver la quinta pelicula"<<endl;
            }
            else if(aux1>1440 || aux2>1440){
                cout<<"-->El fanatico "<<x[i].nombre<<" no logro ver ninguna pelicula"<<endl;
            }
        aux1=0;
        aux2=0;
        }  
}

void presentes_peli2(fanaticos x[]){
    int aux1=0;
    int aux2=0;
    int cont=0;
    for(int i=0;i<10;i++){
        aux1=(x[i].hora_llegada*60)+x[i].min_llegada;
        aux2=(x[i].hora_salida*60)+x[i].min_salida;
        if(aux1<=864 || aux2<=864){
            cont++;
        }
        aux1=0;
        aux2=0;
    }
    cout<<"------------------------------"<<endl;
    cout<<"El porcentaje de fanaticos que estuvieron presentes en la proyeccion de Amanecer Parte 2 fue de "<<(cont*100)/10<<"%"<<endl;
}

void promedio(fanaticos x[]){
    int aux1=0;
    int suma=0;
    for(int i=0;i<10;i++){
        aux1=(x[i].hora_llegada*60)+x[i].min_llegada;
        if(aux1<=720){
            suma=suma+(720-aux1);
        }
        aux1=0;
    }
    cout<<"------------------------------"<<endl;
    cout<<"El tiempo promedio en minutos que duraron esperando los fanaticos el inicio del maraton fue de "<<(suma/10)<<" minutos"<<endl;
}

void mayor_fanatico(fanaticos x[]){
    int aux1=0;
    int mayor=0;
    char nombre[20];
    for(int i=0;i<10;i++){
        aux1=x[i].total_minutos;
        if(aux1>mayor){
            mayor=aux1;
            strcpy(nombre,x[i].nombre);
        }
        aux1=0;
    }
    cout<<"------------------------------"<<endl;
    cout<<"El mayor fanatico de esta saga fue "<<nombre<<endl;
}

int main(){
    fanaticos A[100];
    agregar(A);
    tiempo_fan(A);
    primer_pelicula(A);
    presentes_peli2(A);
    promedio(A);
    mayor_fanatico(A);

    return 0;

}
