#include <iostream>
#include <stack>
using namespace std;

int main() {

    int t;
    while(cin>>t && t>0)
    {
        bool impossivel = false;
        char v1[t];
        char v2[t];
        int aux = 0;
        stack<char> base, estacao, caminho;
        for(int i=0;i<t;i++) cin>>v1[i];
        for(int i=0;i<t;i++) cin>>v2[i];
        for(int i=0;i<t;i++) base.push(v1[t-i-1]);
        while(!impossivel && caminho.size()!=t)
        {
            if(!base.empty())
            {
                estacao.push(base.top());
                base.pop();
                cout<<"I";
            }
            if(!estacao.empty() && estacao.top() == v2[aux])
            {
                while(!estacao.empty() && estacao.top() == v2[aux])
                {
                    caminho.push(estacao.top());
                    estacao.pop();
                    aux++;
                    cout<<"R";
                }
            }
            else if(base.empty()) impossivel = true;
        }
        if(impossivel) cout<<" Impossible";
        cout<<endl;
    }

    return 0;
}
