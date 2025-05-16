#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    while(cin>>t && t != 0){
        vector<int> v(t), r(t,0);
        bool ambi = true;
        for(int i=0;i<t;i++) {
            cin>>v[i];
            v[i]--;
        }
        for(int i=0;i<t;i++){
            if(!(v[v[i]] == i)){
                ambi = false;
                break;
            }
        }
        cout<<(ambi ? "ambiguous\n" : "not ambiguous\n");
    }
    return 0;
}
