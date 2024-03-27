#include<iostream>
using namespace std;



int main (){

int edad [3], sueldo[3], i;
string nombre[3];

for (i=0; i<3; i++){

    cout<<"Ingrese el nombre del empleado."<<i<<" "<<endl;
    cin>>nombre[i];
    cout<<"Ingrese la edad del empleado."<<i<<" "<<endl;
    cin>>edad[i];
    cout<<"Ingrese el sueldo del empleado."<<i<<" "<<endl;
    cin>>sueldo[i];
}

personas_mayores(edad);
}
