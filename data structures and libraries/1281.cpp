#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {

    cout<<fixed;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        map<string, float> nomePreco;
        map<string, int> nomeQuant;
        int p,q,quant;
        float preco, total = 0.00;
        string nome;
        cin>>p;
        cin.ignore();
        while(p--)
        {
            cin>>nome>>preco;
            nomePreco[nome] = preco;
        }
        cin>>q;
        cin.ignore();
        while(q--)
        {
            cin>>nome>>quant;
            nomeQuant[nome] = quant;
        }
        for(const auto& [s, quant] : nomeQuant)
            total += nomePreco[s] * (float)nomeQuant[s];
        cout<<"R$ "<<setprecision(2)<<total<<endl;
    }

    return 0;
}
