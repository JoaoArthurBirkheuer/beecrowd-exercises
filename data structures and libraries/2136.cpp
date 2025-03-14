#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    set<string> sim, nao;
    string amigo, convidado = "";
    while(getline(cin,amigo))
    {
        if(amigo == "FIM") break;
        string resposta = "", amigoMesmo;
        bool b = false;
        for(char c:amigo)
        {
            if(c == ' ') b = true;
            else if(b) resposta += c;
            else amigoMesmo += c;
        }
        if(resposta == "YES")
        {
            if(amigoMesmo.length() > convidado.length()) convidado = amigoMesmo;
            sim.insert(amigoMesmo);
        }
        else nao.insert(amigoMesmo);
    }
    for(string in:sim) cout<<in<<endl;
    for(string in:nao) cout<<in<<endl;
    cout<<endl;
    cout<<"Amigo do Habay:\n"<<convidado<<endl;

    return 0;
}
