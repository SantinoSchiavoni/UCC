/*
Datos: Cordoba, 30 personas, Nombre Apellido, DNI, Provincia, sexo, edad, si tuvo o no Covid
1)Cantidad de personas mayores y menores que ingresaron
2)Sexo de la primera persona con mas de 65 años que entró a la provincia
3)N de personas entre 18 y 30 años que entraron
4)numero de personas con mas de 65 años que tuvieron Covid y vengan de BsAs
5)Nombre de la persona con la menor edad que haya tenido covid19
6)% de mujeres mayores de 70 años que no tuvieron covid19
*/

#include <iostream>
using namespace std;

void punto_1(int edad[30]){
    int menores=0, mayores=0;
    for(int i=0;i<30;i++){
        if(edad[i]>=18){
            mayores++;
        }
        if(edad[i]<18){
            menores++;
        }
    }
    cout<<"Mayores: "<<mayores<<endl;
    cout<<"Menores: "<<menores<<endl;
}

string punto_2(int edad[30], string sexo[30]){
    string sexo2;
    for(int i=0;i<30;i++){
        if(edad[i]>65){
            sexo2=sexo[i];
            return sexo2;
            break;
        }
    }
}

int punto_3(int edad[30], string prov[30]){
    int contador=0;
    for(int i=0;i<30;i++){
        if(prov[i]!="Cordoba"){
            if(edad[i]>=18 && edad[i]<=30){
                contador++;
            }
        }
    }
    return contador;
}

int punto_4(int edad[30], bool covid[30], string prov[30]){
    int contador=0;
    for(int i=0;i<30;i++){
        if(edad[i]>65){
            if(covid[i]==1){
                if(prov[i]=="BsAs"){
                    contador++;
                }
            }
        }
    }
    return contador;

}

string punto_5(string n_a[30], int edad[30], bool covid[30]){
    string nombre;
    int pivot=0;
    for(int i=0;i<30;i++){
        if(i==0){
            pivot=edad[i];
            nombre=n_a[i];
        }
        if(edad[i]<pivot){
            nombre=n_a[i];
        }
    }
    return nombre;
}

int punto_6(int edad[30], string sexo[30], bool covid[30]){
    float porcentaje, contador=0;
    for(int i=0;i<30;i++){
        if(edad[i]>70){
            if(sexo[i]=="f"){
                if(covid[i]==0){
                    contador++;
                }
            }
        }
    }
    porcentaje=(contador/30)*100;
    return porcentaje;
}


int main(){
    string n_a[30], prov[30], sexo[30];
    int dni[30], edad[30];
    bool covid[30];
    for(int i=0;i<30;i++){
        cout<<"Ingrese el nombre y apellido de la persona "<<i+1<<endl;
        cin>>n_a[i];
        cout<<"Ingrese el DNI de la persona "<<i+1<<endl;
        cin>>dni[i];
        cout<<"Ingrese la Provincia de la persona "<<i+1<<endl;
        cin>>prov[i];
        cout<<"Ingrese el sexo de la persona "<<i+1<<endl;
        cin>>sexo[i];
        cout<<"Ingrese la edad de la persona "<<i+1<<endl;
        cin>>edad[i];
        cout<<"Ingrese 1 si tuvo covid, ingrese 0 si no, persona "<<i+1<<endl;
        cin>>covid[i];
    }
    punto_1(edad);
    cout<<"2) "<<punto_2(edad, sexo)<<endl;
    cout<<"3) "<<punto_3(edad, prov)<<endl;
    cout<<"4) "<<punto_4(edad,covid,prov)<<endl;
    cout<<"5) "<<punto_5(n_a,edad,covid)<<endl;
    cout<<"6) "<<punto_6(edad,sexo,covid)<<endl;
}