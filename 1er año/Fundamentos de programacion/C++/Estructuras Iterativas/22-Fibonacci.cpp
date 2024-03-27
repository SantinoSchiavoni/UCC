/*La sucesión de Fibonacci es una sucesión infinita de números naturales: 0,1,1,2,3,5,8,13… 
La sucesión comienza con los números 0 y 1, y a partir de los mismos, cada término es la suma de los 2 anteriores.
 El programa debe permitir al usuario ingresar la cantidad 
 de números de la sucesión que desea que se muestren (mínimo: 3). 
 Se debe imprimir por pantalla la cantidad de números de la sucesión de Fibonacci correspondiente.*/

 #include<iostream>
 using namespace std;

 int  main(void){
    int num0 =0;
    int num1=1;
    int num2=1;
    int num3;
    int numIng;
    cout<<"Ingrese cuandos numeros de fibonacci desea visualizar(El min es 3)"<<endl;
    cin>>numIng;
    numIng=numIng; 
        if(numIng>=3){
            cout<<"1: 0"<<endl;
            cout<<"2: 1"<<endl;
            cout<<"3: 1"<<endl;
            for(int i=4;i<=numIng;i++){
            num3=num1+num2;      
            cout<<i<<": "<<num3<<endl;
            num1=num2;
            num2=num3;
            }
        }else{
            cout<<"Ingrese otro numero"<<endl;
        }
    return 0;
 }