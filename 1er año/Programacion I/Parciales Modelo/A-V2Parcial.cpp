/*
Una empresa extranjera maneja un personal de 20 empleados en donde se conoce el nombre ,
sueldo y la edad de cada uno de ellos. El dueño lo contrata a ud, para que elabore un programa que
lea eso datos y responda las siguientes preguntas :
1- cuantos empleados mayores de 60 años hay en la empresa?-
2- % de empleados que ganan sueldos menores a 100.000 pesos-
3- nombre del empleado que mas gana en la empresa-
4- nombres de los dos empleados que menos ganan en la empresa-
5- % de empleados menores de 30 años que ganen al menos 25,000 pesos-
6- nombres de los empleados que no tengan mas de 25 años
7- promedio de sueldo que ganan los empleados de la empresa.
Consideraciones:
Use vectores, funciones y procedimientos void
*/

#include <iostream>
using namespace std;

void cargar(string n[20],float e[20], float s[20]){
    for(int i=0;i<20;i++){
        cout<<"Ingrese el nombre de la "<<i+1<<" persona"<<endl;
        cin>>n[i];
        cout<<"Ahora ingrese su sueldo"<<endl;
        cin>>s[i];
        cout<<"Ingrese su edad"<<endl;
        cin>>e[i];

    }
}

void burbuja(string n[20],float e[20], float s[20]){
    int aux4s, aux_edad;
    string aux4n;
        for(int i=0;i<20;i++){//burbuja
        for(int j=0;j<19;j++){
            if(s[i]<s[i+1]){
                aux4s=s[i];
                s[i]=s[i+1];
                s[i+1]=aux4s;
                
                aux4n=n[i];
                n[i]=n[i+1];
                n[i+1]=aux4n;

                aux_edad=e[i];
                e[i]=e[i+1];
                e[i+1]=aux_edad;
            }
        }
    }
}

void funcion(string n[20], float s[20], float e[20]){
    float cont_mayores60=0, cont2=0, aux4s, cont_sueldo5=0, cont_edad5=0, aux_edad=0;
    float porc_sueldo2, porc_5=0, tot7=0 ,prom7=0;
    string nombre3, aux4n;

    for(int i=0;i<20;i++){
        if(e[i]>60){
            cont_mayores60++;
        }
        if(s[i]<100000){
            cont2++;
        }
        if(e[i]<30){
            cont_edad5++;
            if(s[i]>=25000){
                cont_sueldo5++;
            }
        }
        tot7+=s[i];
    }

    porc_sueldo2=(cont2/20)*100;//2
    porc_5=(cont_sueldo5/cont_edad5)*100;//5
    prom7=tot7/20;

    cout<<"-->1)Empleados mayores de 60: "<<cont_mayores60<<endl;
    cout<<"-->2)% de empleados que ganan menos de $100.000: "<<porc_sueldo2<<"%"<<endl;
    cout<<"-->3)Nombre del empleado que mas sueldo gana: "<<n[0]<<endl;
    cout<<"-->4)Los dos empleados que menos ganan son: "<<n[18]<<" y "<<n[19]<<endl;
    cout<<"-->5)% de empleados menores de 30 que al menos ganan $25.000 es: "<<porc_5<<"%"<<endl;
    cout<<"-->6)Nombres de empleados no mayores a 25: "<<endl;
    for(int i=0;i<20;i++){
        if(e[i]<25){
        cout<<"--->"<<n[i]<<endl;
        }
    }
    cout<<"-->7)El promedio de sueldo es: "<<prom7<<endl;
}

int main(){
    string n[20];
    float e[20], s[20];
    cargar(n,e,s);
    burbuja(n,e,s);
    funcion(n,e,s);

}