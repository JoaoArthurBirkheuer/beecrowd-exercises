#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    unsigned long long t;
    while(cin>>t)
    {
        if(t == 0) break;
        unsigned long long v;
        bool achou = false;
        vector<unsigned long long> valores;
        while(t--)
        {
            cin>>v;
            valores.push_back(v);
        }
        sort(valores.begin(),valores.end());
        unsigned long long contValor = 0, valorAnterior = 0;
        for(auto i:valores)
        {
           if(valorAnterior != i)
           {
               if(contValor%2 != 0) achou = true;
               else
               {
                   valorAnterior = i;
                   contValor = 1;
               }
           }
           else
            contValor++;
           if(achou) break;
        }
        cout<<valorAnterior<<endl;
    }

    return 0;
}
