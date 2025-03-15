#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> somaSemana;
    int views, soma = 0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<7; j++)
        {
            cin>>views;
            soma += views;
        }
        somaSemana.push_back(soma);
        soma = 0;
    }
    sort(somaSemana.begin(),somaSemana.end());
    int maior = somaSemana[somaSemana.size()-1];
    cout<<maior<<" = ";
    stack<int> binario;
    while(maior != 0)
    {
        binario.push(maior % 2);
        maior /= 2;
    }
    if(binario.empty())
        cout << 0;
    else
    {
        while (!binario.empty())
        {
            cout << binario.top();
            binario.pop();
        }
    }
    cout << endl;
    return 0;
}
