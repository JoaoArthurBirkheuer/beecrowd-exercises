#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int q,e,n;
    cin>>q>>e;
    vector<int> v;
    vector<int>::iterator it;
    for(int i=0;i<e;i++)
    {
       cin>>n;
       v.push_back(n);
    }
    for(int i=0;i<q;i++)
    {
        cin>>n;
        it = find(v.begin(),v.end(),n);
        if(it != v.end()) cout<<0<<endl;
        else
        {
            v.push_back(n);
            cout<<1<<endl;
        }
    }
    return 0;
}
