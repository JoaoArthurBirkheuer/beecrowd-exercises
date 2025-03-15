#include <iostream>
using namespace std;
int ocorrencias(char c, string str);

int main() {

    string vogais, frase;
    while(cin >> vogais)
    {
         /*(cin >> vogais >> frase) nao é possivel
        pois a frase pode apresentar espaços*/
        cin.ignore();
        getline(cin,frase);
        int cont = 0;
        for(char c:vogais) cont += ocorrencias(c,frase);
        cout<<cont<<endl;
    }
    return 0;
}

int ocorrencias(char c, string str)
{
    int cont = 0;
    for(char cc:str) if(cc == c) cont++;
    return cont;
}
