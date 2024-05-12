#include<iostream>
using namespace std;

int main(){
int *p = new int;

cin>>*p; //Generar dato que esté en la direccion *p
cout<<p; //Imprime la direccion
cout<<*p; //Imprime el valor de la variable p

}