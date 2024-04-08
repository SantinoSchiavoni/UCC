#include<iostream>
using namespace std;

string buscar(string x[], int y[], int codi){
     int i,pos;   
        for(i=0;i<5;i++){
            if(y[i]==codi){
                pos=i;
            }
        return x[pos];
        }
}

int main(){
    int a[5],i,codigo;
    string b[5];

    for(i=0;i<5;i++){
        cout<<"Indique el nombre del empleado"<<endl;
        cin>>b[i];
        cout<<"indique el codigo del empleado"<<endl;
        cin>>a[i];
    }

    cout<<"indique el codigo a buscar"<<endl;
    cin>>codigo;
    cout<<"El nombre que corresponde a ese codigo es: "<<buscar(b,a,codigo)<<endl;

}