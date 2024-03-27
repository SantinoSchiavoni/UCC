/*
Escriba una función lógica Vocal, que determine si un carácter es una vocal.*/

#include<iostream>
using namespace std;

bool vocal(char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        return true;
    }else{
        return false;
    }
}
int main(){
    char letra1;
    cout<<"Ingresa una letra"<<endl;
    cin>>letra1;
    cout<<"Su letra es "<<vocal(letra1)<<endl;
    return 0;
}