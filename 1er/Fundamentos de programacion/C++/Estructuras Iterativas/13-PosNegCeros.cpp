/*
Leer diez números y determinar la cantidad de ceros, positivos y negativos.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    float num;
    int ceros=0;
    int positivos=0;
    int negativos=0;
    for(int i=1;i<=10;i++){
        cout<<"Ingresa el "<<i<<" numero"<<endl;
        cin>>num;
        if(num<0){
            negativos++;
            }else if(num>0){
                positivos++;
                }else{
                    ceros++;
        }
    }
    cout<<"Usted ingreso:"<<endl;
    cout<<"Ceros: "<<ceros<<endl;
    cout<<"Positivos: "<<positivos<<endl;
    cout<<"Negativos: "<<negativos<<endl;
    return 0;
}