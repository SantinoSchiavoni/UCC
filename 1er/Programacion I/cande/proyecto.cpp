#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib> // para la función atoi
#include <cctype> // para tolower
#include <windows.h> 
using namespace std;

struct fecha{
    int dia;
    int mes;
    int ano;

};

struct candidatos{
    char dni[10];
    char nombre[40];
    char sexo[20];
    char partido[30];
    fecha nacimiento;
    int contvotos;

};

struct votantes{
    char dni[10];
    char nombre[40];
    char sexo[20];
    char voto[40];
    fecha nacimiento;

};

void Lower(char r[]) {
    for (int i = 0; r[i] != '\0'; i++) {
        r[i] = tolower(r[i]);
    }
}

bool validarNombre(char nombre[]) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; nombre[i] != '\0'; i++) {
        if (!isalpha(nombre[i]) && nombre[i] != ' ') {
            return false; // Se encontró un carácter no válido, por lo tanto, el nombre es inválido
        }
    }
    return true; // Todos los caracteres son válidos
}

void datosc(candidatos x[], int n) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 3);
    //bool dia=true, mes=true;
    cout << "Ingrese los siguientes datos del candidato " << endl;

    for (int i = 0; i < n; i++) {
        bool dia=true, mes=true;
        cin.ignore();
        
        cout << "->Nombre y apellido del candidato " << i + 1 << ": " << endl;
        do {
            cin.getline(x[i].nombre, 40, '\n');
            if (!validarNombre(x[i].nombre)) {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Nombre invalido. Ingrese solo letras. Intente nuevamente." << endl;
                SetConsoleTextAttribute(hConsole, 3);
            }
        } while (!validarNombre(x[i].nombre));
        SetConsoleTextAttribute(hConsole, 3);

        cout << "->DNI: " << endl;
         bool esDNIValido=true;
        do {
            cin.getline(x[i].dni, 20, '\n');
            for (size_t j = 0; j < strlen(x[i].dni); ++j) {
                if (!isdigit(x[i].dni[j])) {
                    esDNIValido = true;
                }else{
                    esDNIValido=false;
                }

            }
            if (esDNIValido==true || atoi(x[i].dni) < 0) {
                esDNIValido=true;
                SetConsoleTextAttribute(hConsole, 4);
                cout<< "El DNI ingresado no es valido. Debe contener solo numeros. Vuelva a ingresar los datos." << endl;
            }else{
                esDNIValido=false;
            }
        } while (esDNIValido==true);
        SetConsoleTextAttribute(hConsole, 3);

        cout << "->Sexo: " << endl;
        do {
            cin.getline(x[i].sexo, 20, '\n');
            if (strcmp(x[i].sexo, "f") != 0 && strcmp(x[i].sexo, "m") != 0) {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Sexo invalido. Por favor, vuelva a ingresar los datos." << endl;
                SetConsoleTextAttribute(hConsole, 3);
            }
        } while (strcmp(x[i].sexo, "f") != 0 && strcmp(x[i].sexo, "m") != 0);
        SetConsoleTextAttribute(hConsole, 3);

        cout << "->Partido: " << endl;
        do {
            cin.getline(x[i].partido, 30, '\n');
            if (cin.fail() || x[i].partido[0] == '\0') {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Campo invalido. Por favor, vuelva a ingresar los datos." << endl;
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(hConsole, 3);
            }
        } while (cin.fail() || x[i].partido[0] == '\0');
        SetConsoleTextAttribute(hConsole, 3);

        cout<<"-->Fecha de nacimiento"<<endl;

        while(dia==true){
        cout<<"->Dia: "<<endl;
        cin>>(x[i].nacimiento.dia);
         if (cin.fail()) {
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(hConsole, 3);
            }
        if(x[i].nacimiento.dia>0 && x[i].nacimiento.dia<=31 ){
                dia=false;
        }else{
                dia=true;
                SetConsoleTextAttribute(hConsole, 4);
                cout<<"El dia ingresado no existe. Porfavor ingrese el dato nuevamente "<<endl;
        }
        }

        while(mes==true){
            cout<<"->Mes: "<<endl;
            cin>>(x[i].nacimiento.mes);
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(hConsole, 3);
            }
            if(x[i].nacimiento.mes>0 && x[i].nacimiento.mes<=12 ){
                mes=false;
            }else{
                mes=true;
                SetConsoleTextAttribute(hConsole, 4);
                cout<<"El mes ingresado no existe. Porfavor ingrese el dato nuevamente "<<endl;
            }
        }

        SetConsoleTextAttribute(hConsole, 3);
        cout << "->Ano: " << endl;
        do {
            cin >> x[i].nacimiento.ano;
            if (cin.fail()) {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Campo invalido. Por favor, vuelva a ingresar los datos." << endl;
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(hConsole, 3);
            }
        } while (cin.fail());

        SetConsoleTextAttribute(hConsole, 3);
        if (2023 - x[i].nacimiento.ano < 30) {
            SetConsoleTextAttribute(hConsole, 4);
            cout << "El candidato no cumple con el requisito de edad para postularse. Por favor, vuelva a ingresar los datos." << endl;
            SetConsoleTextAttribute(hConsole, 3);
            i--; // Volver a pedir la fecha de nacimiento actual
            continue;
        }
    }
}

void voto(int nc, candidatos x[]){
    cout<<"Ingrese el nombre del candidato que desea votar "<<endl;
    for(int i=0;i<nc;i++){
        cout<<x[i].nombre<<endl;
    }

}

void datosv(votantes x[], int n, int nc,candidatos f[]){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    cout<<"Ingrese los siguientes datos del votante"<<endl;
    for(int i=0;i<n;i++){
        bool sexo=true, dia=true, mes=true, voto1=true;

        cin.ignore();
        cout<<"->Nombre y apellido: "<<endl;
        do {
            cin.getline(x[i].nombre, 40, '\n');
            if (!validarNombre(x[i].nombre)) {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Nombre invalido. Ingrese solo letras. Intente nuevamente." << endl;
            }
        } while (!validarNombre(x[i].nombre));
        SetConsoleTextAttribute(hConsole, 6);
        
       cout << "->DNI: " << endl;
        bool esDNIValido=true;
        do {
            cin.getline(x[i].dni, 20, '\n');
            for (size_t j = 0; j < strlen(x[i].dni); ++j) {
                if (!isdigit(x[i].dni[j])) {
                    esDNIValido=true;
                }else{
                    esDNIValido=false;
                }

            }
            if (esDNIValido==true || atoi(x[i].dni) < 0) {
                esDNIValido=false;
                SetConsoleTextAttribute(hConsole, 4);
                cout<< "El DNI ingresado no es valido. Debe contener solo numeros. Vuelva a ingresar los datos." << endl;
            }else{
                esDNIValido=true;
            }
        } while (esDNIValido==false);
        SetConsoleTextAttribute(hConsole, 6);
        
        while(sexo==true){
        cout<<"->Sexo: "<<endl;
        cin.getline(x[i].sexo,20,'\n');
        Lower(x[i].sexo);
        if (strcmp(x[i].sexo,"f")==0 || strcmp(x[i].sexo,"m")==0 ){
            SetConsoleTextAttribute(hConsole, 6);
            sexo=false;
        }else{
            sexo=true;
            SetConsoleTextAttribute(hConsole, 4);
            cout<<"Sexo invalido. Porfavor ingrese m para masculino o f para femenino "<<endl;
        }
    }
       
        
        cout<<"-->Fecha de nacimiento"<<endl;

        while(dia==true){
        cout<<"->Dia: "<<endl;
        cin>>(x[i].nacimiento.dia);
         if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
        if(x[i].nacimiento.dia>0 && x[i].nacimiento.dia<=31 ){
                SetConsoleTextAttribute(hConsole, 6);
                dia=false;
        }else{
                dia=true;
                SetConsoleTextAttribute(hConsole, 4);
                cout<<"El dia ingresado no existe. Porfavor ingrese el dato nuevamente "<<endl;
        }
        }

        cout<<"->Mes: "<<endl;
        while(mes==true){
            cin>>(x[i].nacimiento.mes);
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
            if(x[i].nacimiento.mes>0 && x[i].nacimiento.mes<=12 ){
                SetConsoleTextAttribute(hConsole, 6);
                mes=false;
            }else{
                mes=true;
                SetConsoleTextAttribute(hConsole, 4);
                cout<<"El mes ingresado no existe. Porfavor ingrese el dato nuevamente "<<endl;
            }
        }
        cout << "->Ano: " << endl;
        do {
            cin >> x[i].nacimiento.ano;
            if (cin.fail()) {
                SetConsoleTextAttribute(hConsole, 4);
                cout << "Campo invalido. Por favor, vuelva a ingresar los datos." << endl;
                cin.clear();
                cin.ignore();
                SetConsoleTextAttribute(hConsole, 3);
            }
        } while (cin.fail());

        SetConsoleTextAttribute(hConsole, 3);
        if (2023 - x[i].nacimiento.ano <16 || 2023 - x[i].nacimiento.ano>100 ) {
            SetConsoleTextAttribute(hConsole, 4);
            cout << "El votante no cumple con los requisitos. Por favor, vuelva a ingresar los datos." << endl;
            SetConsoleTextAttribute(hConsole, 3);
            i--; // Volver a pedir la fecha de nacimiento actual
            continue;
        }
            cout<<"Ingrese el nombre del candidato por el que desea votar "<<endl;
            cin.ignore();
            do{
                cin.getline(x[i].voto,40,'\n');
                Lower(x[i].voto);
                for(int j=0;j<nc;j++){
                    if(strcmp(x[i].voto,"nulo")==0){
                        voto1=false;
                    }
                    if(strcmp(x[i].voto,f[j].nombre)==0){
                        voto1=false;
                    }
                }
                if(voto1==true){
                    SetConsoleTextAttribute(hConsole, 4);
                    cout<<"El candidato ingresado no existe. Porfavor ingrese el dato nuevamente "<<endl;
                    SetConsoleTextAttribute(hConsole, 3);
                }
        }while(voto1==true);
    }
}

void menu1(){
    cout<<"----------RESULTADOS----------"<<endl;
    cout<<" "<<endl;
    cout<<"1) Mostrar los candidatos inscritos y el porcentaje de votos que obtuvo cada uno "<<endl;
    cout<<"2) Ingresar el DNI del candidato del que desea saber el numero de hombres y mujeres que votaron por el "<<endl;
    cout<<"3) Mostrar datos de los votantes con 70 anos o mas "<<endl;
    cout<<"4) Mostrar datos del candidato ganador "<<endl;
    cout<<"5) Ingresar el DNI del votante del cual desea saber su edad y el nombre del candidato por el que voto "<<endl;
    cout<<"6) Mostrar DNI de todos aquellos votantes que marcaron su voto como nulo "<<endl;
    cout<<"7) Mostrar listado de los candidatos ordenados por la cantidad de votos que obtuvo cada uno. "<<endl;
    cout<<"8) Salir "<<endl;

}

void votos(int nc,int nv, votantes x[], candidatos f[]){
    int cand=0;
    float por;
    for(int i=0;i<nc;i++){
        for(int j=0;j<nv;j++){
            if(strcmp(x[j].voto,f[i].nombre)==0){
            cand++;
            }
        }
        por=(cand*100)/nv;
        cout<<f[i].nombre<<" "<<por<<"% "<<"de votos"<<endl;
        cand=0;

    }
}

void buscarcandidato (int nv, int nc, candidatos f[], votantes x[]){
    int mujeres = 0, hombres = 0;
    string dnicandidato;
    bool encontrar=false;

    cout << "Ingresar el dni de un candidato: " << endl;
    cin >> dnicandidato;

    for (int i = 0; i < nc; i++) {
        if (f[i].dni == dnicandidato) {
            encontrar=true;
            for (int j = 0; j < nv; j++) {
                if (strcmp(x[j].voto,f[i].nombre)==0){
                    if (strcmp(x[i].sexo, "f") == 0) {
                        mujeres++;
                    } else if (strcmp(x[i].sexo, "m") == 0) {
                        hombres++;
                    }
                }
            }
        }

    }
    
    if (encontrar)
    {
        cout<<"La cantidad de mujeres que votaron al candidato es: "<<mujeres<<endl;
        cout<<"La cantidad de hombres que votaron al candidato es: "<<hombres<<endl;
    }else{
        cout<<"No hay ningun candidato registrado con el DNI ingresado."<<endl;
    }
    
 
}

void terceraedad(votantes x[], int n){
    ofstream file1;

    file1.open("C:/Users/cande/OneDrive/Desktop/proyectofinal/terceraedad.txt");

    for (int i = 0; i < n; i++)
    {
        if(x[i].nacimiento.ano<=1953)
        file1<<x[i].nombre<<" "<<x[i].dni<<endl;
    }
    file1.close();
}

void ganador1(candidatos x[],int nc){
    int maxvotos=-1, indiceganador=-1;
    for (int i = 0; i < nc; i++)
    {
        if(x[i].contvotos>maxvotos){
            maxvotos=x[i].contvotos;
            indiceganador=i;
        }
    }
    ofstream file2;
    file2.open("c:/Users/cande/OneDrive/Desktop/proyectofinal/ganador.txt");
    if(indiceganador!=-1){
        file2<<x[indiceganador].nombre<<" con "<<x[indiceganador].contvotos<<endl<<" DNI "<<x[indiceganador].dni;
    }else{
        file2<<"No hay un ganador claro. Hubo un empate."<<endl;
    }
    file2.close();
    
}

void buscarvotante(int nv, int nc, votantes x[]){
    string dnivotante;
    int edad;
    bool encontrar=false;

    cout << "Ingresar el dni de un votante: " << endl;
    cin >> dnivotante;

    for (int i = 0; i < nv; i++) {
        if (x[i].dni == dnivotante) {
            edad=2023-x[i].nacimiento.ano;
            cout<<edad<<" anos "<<" y voto al candidato "<<x[i].voto<<endl;
            encontrar=true;
        }
    }

    if(!encontrar){
        cout<<"No hay ningun votante registrado con ese DNI."<<endl;
    }

}

void nulos(int nv, votantes x[]){
    ifstream file3;
    file3.open("c:/Users/cande/OneDrive/Desktop/proyectofinal/nulos.txt");
    if(file3.fail()){
        cout<<"El archivo no existe en la ruta "<<endl;
    }else{
        for(int j=0;j<nv;j++){
            if(x[j].voto=="nulo"){
                file3.getline(x[j].dni,10,'\n');

             }

            }
        cout <<"Se han listado los votantes nulos en 'nulos.txt'" << endl;

        }

    file3.close();

}

void ordenar (int nc, int nv, candidatos f[], votantes x[]){
    candidatos aux;
    bool bandera=0;
    for (int i = 0; i < nc-1; i++)
    {
        bool intercambio= false;
        for (int j = 0; j < nc-i-1; j++)
        {
            int votos1=0, votos2=0;
            for (int k = 0; k < nv; k++)
            {
                if(strcmp(x[k].voto,f[j].nombre)==0){
                    votos1++;
                }
                if (strcmp(x[k].voto,f[j+1].nombre)==0)
                {
                    votos2++;
                }
                
            }      
        }
        while(intercambio==false){
            aux=f[i];
            f[i]=f[i+1];
            f[i+1]=aux;
            intercambio=true;
        }

        if(!intercambio){
            break;
        }
        
    }
    
    cout << "Candidatos ordenados por la cantidad de votos que obtuvieron: " << endl;
    for (int i = nc - 1; i >= 0; i--) {
        cout << "Nombre y apellido: " << f[i].nombre << ", DNI: " << f[i].dni << endl;
    }
}

int main()
{   cout<<"----------ELECCIONES 2023----------"<<endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int ncandidatos, nvotantes, opcion1;
    candidatos A[100];
    votantes B[100];

        cout << "Ingrese la cantidad de candidatos de los que desea cargar los datos  " << endl;
        cin >> ncandidatos;
        datosc(A, ncandidatos);
        cout << "Ingrese la cantidad de votantes de los que desea cargar los datos  " << endl;
        cin >> nvotantes;
        datosv(B, nvotantes, ncandidatos, A);
            do
            {
                menu1();
                cin >> opcion1;
                switch (opcion1)
                {
                case 1:
                    votos(ncandidatos, nvotantes, B, A);
                    break;
                case 2:
                    buscarcandidato(nvotantes, ncandidatos, A, B);
                    break;
                case 3:
                    terceraedad(B, nvotantes);
                    break;
                case 4:
                    ganador1(A, ncandidatos);
                    break;
                case 5:
                    buscarvotante(nvotantes, ncandidatos, B);
                    break;
                case 6:
                    nulos(nvotantes, B);
                    break;
                case 7:
                    ordenar(nvotantes, ncandidatos, A, B);
                    break;
                }
            } while (opcion1 != 8);
    cout << "*****Fin de las elecciones 2023*****" << endl;
}
