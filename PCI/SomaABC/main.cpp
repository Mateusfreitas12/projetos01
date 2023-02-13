#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"Digite O Valor A: "<<endl;
    cin>>A;
    cout<<"Digite O Valor B: "<<endl;
    cin>>B;
    cout<<"Digite O Valor C: "<<endl;
    cin>>C;
    if((A+B)<C){
        cout<<"A Soma De A e B Menor Que C. SOMA = "<<A+B<<endl;
    }
    if((A+B==C)){
        cout<<"A Soma De A e B Igual a C. SOMA = "<<A+B<<endl;
    }
    if((A+B)>C){
        cout<<"A Soma De A e B Maior Que C. SOMA = "<<A+B<<endl;
    }
}
