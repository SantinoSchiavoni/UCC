/*
Implementar un programa que solicite la introduccion de un vector de N elementos, invierta su contenido  y lo muestre.
*/

#include<iostream>
using namespace std;



void funcion(int A[], int n){

    cout<<"Ingrese la cantidad de elementos"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese el elemento "<<i+1<<endl;
        cin>>A[i];
    }
    int k=n;
    for(int j=0;j<n;j++){
            A[j]=A[k];
            k--;
        }

    for(int i=0;i<n;i++){
        cout<<"----------"<<endl;
        cout<<A[i]<<endl;
    }

}

int main(){
int A[100], n;
funcion(A,n);
}