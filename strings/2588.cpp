#include <bits/stdc++.h>
using namespace std; 
int main() {
 
    // encontrar maior frequencia impar com unordered map
    // adicionar para as outras para atingir valores pares
    string str;
    while(getline(cin,str))
    {
        int cont = 0;
        unordered_map<char,int> frequencia;
        for(char c:str) 
            frequencia[c]++;
        for(const auto& par : frequencia)
            if(par.second % 2 != 0) cont++;
        int minAdditions = max(0, cont - 1);
        cout<<minAdditions<<endl;
    }
 
    return 0;
}