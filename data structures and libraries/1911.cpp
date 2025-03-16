#include <iostream>
#include <string>
#include <map>
using namespace std;
int contDiferencas(string s, string ss);
int main() {

    string s, ss;
    int a,b;
    while(cin>>a)
    {
        if(a == 0) break;
        int c = 0;
        map<string, string> alunosAssinaturas;
        while(a--)
        {
           cin>>s>>ss; /// nomes nao contem espacos pode usar cin
           alunosAssinaturas[s] = ss;
        }
        cin>>b;
        while(b--)
        {
            cin>>s>>ss;
            if(alunosAssinaturas.find(s) != alunosAssinaturas.end() && contDiferencas(alunosAssinaturas[s],ss) >= 2) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

int contDiferencas(string s, string ss)
{
    int dif = 0, tam = s.length();
    for(int i=0;i<tam;i++)
        if(s[i] != ss[i]) dif++;
    return dif;
}
