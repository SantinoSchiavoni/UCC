 using namespace std;

/*int primo(int num1){
    int div;
    for(int i=num1;i>=1;i--){
        div = num1%i;
        if(div==0){
            cout<<"No Es Primo";
        }else{
            cout<< "Es Primo";
        }
    }
 }*/

 int primo(int num1){
    int div;
    int i=num1;
    do{
    div = num1%i;
    i--;
    }while(div==0);
    if(i==1){
        cout<<"El numero es primo"<<endl;
    }else if(i==num1) {
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"Su numero no es primo"<<endl;
    }
 }


 int main(){
    int num2;
    cout<<"ingrese un numero"<<endl;
    cin>>num2;
    cout<<"Su numero: "<<primo(num2)<<endl;
    return 0;
 }