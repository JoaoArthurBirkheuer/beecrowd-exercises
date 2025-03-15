#include <iostream>
#include <string>
using namespace std;

int main() {

    string s="";
    int x = 0, y = 0, cont = 0;
    cin>>x;
    while(cont<x)
    {
        cin>>y;
        cin.ignore();
        string vetor[y];
        for(int i=0;i<y;i++) vetor[i] = "";
        for(int i = 0;i < y;i++)
        {
          getline(cin,vetor[i]);
        }
        int valorIndividual = 0, valorFinal = 0;
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<vetor[i].length();j++)
            {
                valorIndividual = (vetor[i][j]-'A') + i + j;
                valorFinal += valorIndividual;
            }
        }
        cout<<valorFinal<<endl;
        cont++;
    }
    return 0;
}
