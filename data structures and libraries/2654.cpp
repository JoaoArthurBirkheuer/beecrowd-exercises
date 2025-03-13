#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

    map<string, vector<int>> nomesStatus;
    string nome;
    int power, kills, deaths;
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        cin >> nome >> power >> kills >> deaths;
        nomesStatus[nome] = {power,kills,deaths};
    }
    string resposta = "";
    int maiorPoder = 0, maiorKills = 0, menorDeaths = 101;
    vector<string> aux;
    for (auto &[str, atributos] : nomesStatus) {
        int p = atributos[0];
        int k = atributos[1];
        int d = atributos[2];

        if (p > maiorPoder) {
            maiorPoder = p;
            maiorKills = k;
            menorDeaths = d;
            aux = {str};
        }
        else if (p == maiorPoder) {
            if (k > maiorKills) {
                maiorKills = k;
                menorDeaths = d;
                aux = {str};
            }
            else if (k == maiorKills) {
                if (d < menorDeaths) {
                    menorDeaths = d;
                    aux = {str};
                }
                else if (d == menorDeaths)
                    aux.push_back(str);
            }
        }
    }
    if(aux.size()==1) cout<<aux[0]<<endl;
    else
    {
        string menor = aux[0];
        for(string str:aux)
            if(menor > str) menor = str;
        cout<<menor<<endl;
    }
    return 0;
}
