#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s, aux = "";
        set<string> a;
        set<string>::iterator it;
        getline(cin,s);
        for(char c:s)
        {
            if(c == ' '){
                a.insert(aux);
                aux = "";
            }
            else aux += c;
        }
        if(!aux.empty()) a.insert(aux);
        for(it = a.begin();it != a.end();)
        {
            cout<<*it;
            if((++it) != a.end())cout<<" ";
            // para essa analise
            // nao pode incrementar em cima e embaixo
            // melhor incrementar s� embaixo
        }
        cout<<endl;
    }
    return 0;
}
