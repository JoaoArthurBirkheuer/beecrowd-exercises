#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int v,contOrdenacao = 0;
        cin>>v;
        cin.ignore();
        string vetor;
        getline(cin,vetor);
        for(int i=0;i<v;i++)
        {
            for(int j=v-1;j>i;j--)
            {
                if(vetor[i]>vetor[j])
                {
                    swap(vetor[i],vetor[j]);
                    contOrdenacao++;
                }
            }
        }
        if(contOrdenacao <= 1) cout<<"There are the chance.\n";
        else cout<<"There aren't the chance.\n";
    }

    return 0;
}
