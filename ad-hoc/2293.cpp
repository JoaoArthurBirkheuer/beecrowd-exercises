#include <iostream>
using namespace std;

int main() {

    int linhas, colunas, valor, maiorSoma = 0;
    cin>>linhas>>colunas;
    int somaLinhas[linhas] = {0}, somaColunas[colunas] = {0};
    for(int i=0;i<linhas;i++)
    {
        for(int j=0;j<colunas;j++)
        {
            cin>>valor;
            somaColunas[j] += valor;
            somaLinhas[i] += valor;
        }
    }
    for(int i=0;i<linhas;i++) if(somaLinhas[i] > maiorSoma) maiorSoma = somaLinhas[i];
    for(int i=0;i<colunas;i++) if(somaColunas[i] > maiorSoma) maiorSoma = somaColunas[i];
    cout<<maiorSoma<<endl;
    return 0;
}
