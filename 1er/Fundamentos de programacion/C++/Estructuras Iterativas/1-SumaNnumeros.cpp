#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    int c=0;
    int s=0;
    float n;
    //Logica
    cout<<"n: ";cin>>n;
    while(c<n){
        s = s + n;
        c +=1;
    }
    cout<<s<<endl;
    return 0;
}