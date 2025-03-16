#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<string> nomes;
    string nome = "";
    int t, comp = 0, ncomp = 0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       getline(cin,nome);
       if(nome[0] == '+') comp++;
       else ncomp++;
       nomes.push_back(nome.substr(2));
    }
    sort(nomes.begin(),nomes.end());
    for(string s:nomes) cout<<s<<endl;
    cout<<"Se comportaram: "<<comp<<" | Nao se comportaram: "<<ncomp<<endl;

    return 0;
}
