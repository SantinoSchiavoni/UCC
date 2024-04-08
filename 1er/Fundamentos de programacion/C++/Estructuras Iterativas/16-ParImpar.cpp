/*Ingresar 8 números por teclado. Contabilizar la cantidad de pares, impares y nulos.*/

#include<iostream>
using namespace std;

int main(void){
    int num,num2;
    int par=0;
    int impar=0;
    int nulo=0;
    for(int i=1;i<=8;i++){
        cout<<"Ingrese el "<<i<<" numero"<<endl;
        cin>>num;
        num2 = num%2;
        if(num==0){
            nulo++;
        }else if(num2==0){
            par++;
        }else{
            impar++;
        }
    }
    cout<<"Pares: "<<par<<endl;
    cout<<"Impares: "<<impar<<endl;
    cout<<"Nulos: "<<nulo<<endl;
    return 0;
}