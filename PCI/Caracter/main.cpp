#include <iostream>

using namespace std;

int main(){
    int l,c;
    char pt;

    cout<<"Digite a quantidade de linhas: ";cin>>l;
    cout<<"Digite a quantidade de colunas: ";cin>>c;
    cout<<"Digite um caracter a ser inserido: ";cin>>pt;

    char m[l][c];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            m[i][j]=pt;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
           cout<<m[i][j]<<' ';
        }
         cout<<endl;
    }
}
