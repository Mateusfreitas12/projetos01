#include <iostream>

using namespace std;

int main(){
    int vetor[50],valor;
    cout<<"Digite O Valor: ";
    cin>>valor;
    //PERCORRENDO O VETOR E SOMANDO O VETOR
    for(int i=1;i<=50;i++){
        if(valor/2 && valor>30){
            cout<<vetor[50]+valor<<endl;
        }
    }
    //INVERTENDO OS VALORES DO VETOR
    if(valor%2 && valor<2){
        cout<<"Inverta Valores";
    }
}
