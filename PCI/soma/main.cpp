#include <iostream>

using namespace std;

int soma(int n1, int n2);

int subtracao(int n1, int n2);

int multiplicacao(int n1, int n2);

int divisao(int n1, int n2);

int main(){
    int a,b;
    cout<<"=/=/= SOMA =/=/="<<endl;
    cin>>a>>b;
    cout<<soma(a,b)<<endl;

    cout<<"=/=/= SUBTRACAO =/=/="<<endl;
    int c,d;
    cin>>c>>d;
    cout<<subtracao(c,d)<<endl;

    cout<<"=/=/= MULTIPLICACAO =/=/="<<endl;
    int e,f;
    cin>>e>>f;
    cout<<multiplicacao(e,f)<<endl;

    cout<<"=/=/= DIVISAO =/=/="<<endl;
    int g,h;
    cin>>g>>h;
    cout<<divisao(g,h)<<endl;

    return 0;
}

int soma(int n1, int n2)
{
    return (n1 + n2);
}
int subtracao(int n1, int n2)
{
    return (n1 - n2);
}
int multiplicacao(int n1, int n2)
{
    return (n1 * n2);
}
int divisao(int n1, int n2)
{
    return (n1 / n2);
}
