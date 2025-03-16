#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string amigos, aux = "", amigo;
    vector<string> lista1, lista2;
    getline(cin,amigos);
    for(char c:amigos)
    {
        if(c == ' ')
        {
          lista1.push_back(aux);
          aux = "";
        }
        else aux += c;
    }
    if(!aux.empty()) lista1.push_back(aux);
    aux = "";
    getline(cin,amigos);
    for(char c:amigos)
    {
        if(c == ' ')
        {
          lista2.push_back(aux);
          aux = "";
        }
        else aux += c;
    }
    if(!aux.empty()) lista2.push_back(aux);
    aux = "";
    getline(cin,amigo);
    if(amigo == "nao")
    {
        for(int i=0;i<lista1.size();i++)
            cout<<lista1[i]<<" ";
        for(int i=0;i<lista2.size();i++)
            (i<lista2.size()-1)?(cout<<lista2[i]<<" "):(cout<<lista2[i]<<endl);
    }

    else
    {
        bool achou = false;
        for(int i=0;i<lista1.size();i++)
        {
            if(lista1[i]==amigo && !achou)
            {
                for(int j=0;j<lista2.size();j++) cout<<lista2[j]<<" ";
                achou = true;
            }
            (i == lista1.size()-1)?(cout<<lista1[i]<<endl):(cout<<lista1[i]<<" ");
        }
    }
    return 0;
}
