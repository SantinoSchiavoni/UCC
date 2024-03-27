//Matriz ejemplo

#include <iostream>
using namespace std;

int main(){
    int a[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Ingrese el valor del elemento: ["<<i<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }

        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<"";
        }
        cout<<" "<<endl;
    }
}