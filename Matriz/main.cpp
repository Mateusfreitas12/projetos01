#include <iostream>

using namespace std;


int main()
{
                //Carrega AS Duas Matrizes
    int n;
    cout<<"Digite A Dimensao Da Matriz: ";
    cin>>n;

    int mat1[100][100], mat2[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                mat1[i][j]=1;
                }else{
                    mat2[i][j]=0;
                }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat2[i][j]=mat1[i][j];
        }

    }
                //MOSTRA AS DUAS MATRIZES
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}
