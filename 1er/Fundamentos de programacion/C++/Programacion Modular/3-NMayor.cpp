/*La función debe recibir como parámetro 2 números, 
y debe devolver como resultado el mayor de ellos.
*/

#include<iostream>
using namespace std;

float numMayor(float num1, float num2){
    if(num1>num2){
        return num1;
    }else if(num2>num1){
        return num2;
    }else{
        cout<<"Son iguales"<<endl;
    }
}

int main(){
    float num3, num4;
    cout<<"ingresa 2 numeros a comparar"<<endl;
    cin>>num3;
    cin>>num4;
    cout<<"El numero mas grande es: "<<numMayor(num3,num4)<<endl;
    return 0;
}