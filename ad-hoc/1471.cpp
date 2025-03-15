#include <iostream>

using namespace std;

int main() {

    int v,r;
    while(cin>>v>>r)
    {
            int retornaram[v],var,lastIndex=0;
            for(int i=0;i<v;i++) retornaram[i] = 0;
            for(int i=0;i<r;i++)
            {
               cin>>var;
               retornaram[var-1] = 1;
               if(lastIndex<i) lastIndex = i;
            }
            if(v==r)
            {
                cout<<"*"<<endl;
                continue;
            }
            for(int i=0;i<v;i++)
                if(retornaram[i]==0)
                    cout<<i+1<<" ";
            cout<<endl;
        }
        return 0;
    }
