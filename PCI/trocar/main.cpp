#include <iostream>

using namespace std;

void trocar (int&n, int&m)
{
    n= n+m;
    m= n-m;
    n= n-m;
}

int main(){
    int a;
    int b;
    int c;
    //Criar um pograma que receba tres numeros inteiros e ordene-os do menor para o maior
    cout << "Digite o valor de a: " << endl;
    cin >> a;
    cout << "Digite o valor de b: " << endl;
    cin >> b;
    cout << "Digite o valor de c: " << endl;
    cin >> c;
    if(a>b){
        trocar(a,b);
        if(a>c){
            trocar(a,c);
            }else{
                if(b > c){
                    trocar(b,c);
                }
            }
    }else{
        if(b>c){
            trocar(b,c);
        }
    }
    cout << "a="<<a<<" b="<<b<<" c="<<c<< endl;
    return 0;
}
