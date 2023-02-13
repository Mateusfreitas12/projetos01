#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//FUNÇÃO PARA CONTAR TOTAL DE ZEROS QUE APARECE NA MATRIZ
int ContarZeros(int matriz1[3][3])
{
    int zero=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matriz1[i][j]==0){
                zero++;
            }
        }
    }
    return zero;
}

int main(){
    int matriz[3][3];
    srand(time(NULL));
    //PERCORRE A MATRIZ
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz[i][j]=rand()%10;
        }
    }
    //MOSTRA A MATRIZ
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //CHAMA A FUNÇÃO E MOSTRA TOTAL DE ZEROS
    cout<<"Total De Zeros = "<<ContarZeros(matriz);
}
