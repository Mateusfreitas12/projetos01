#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char controle;
    cout << "Pressione uma tecla: ";
    do{
        //cin >> controle; //precisa de enter para confirmar
        //controle = getche(); //nao precisa de enter para confirmar
        controle = getch(); //nao ecoa a tecla pressionada
        cout << controle;
    }while(controle != 'x' && controle != 'X');
    return 0;
}
