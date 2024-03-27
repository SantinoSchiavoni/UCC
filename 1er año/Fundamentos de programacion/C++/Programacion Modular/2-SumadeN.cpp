/*Escriba una función que reciba como parámetros 2 números,
 y retorne la suma de ambos.*/

 #include<iostream>
 using namespace std;

 float sumaNumeros(float num1, float num2){
    float suma;
    suma = num1+num2;
    return suma;
 }

 int main(){
    float numIn1,numIn2;
    cout<<"Ingresa tus 2 numeros a sumar"<<endl;
    cout<<"1: ";cin>>numIn1;
    cout<<"2: ";cin>>numIn2;
    cout<<"La suma es de: "<<sumaNumeros(numIn1,numIn2)<<endl;
    return 0;
 }