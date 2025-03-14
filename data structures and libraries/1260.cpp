#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main(){
    int t;
    cin >> t;
    int nl = 0;
    while(t--){
        if(nl)cout <<endl;
        int amount = 0;
        mp.clear();
        cin >> ws;
        while(true){
            string s;
            getline(cin, s);
            if(s.empty())break;
            mp[s]++;
            ++amount;
        }
        cout << fixed << setprecision(4);
        for(auto it : mp){
            cout << it.first << " "<<((double)it.second*100.0000)/(amount*1.0000)<<endl;
        }
        ++nl;
    }
    return 0;
}
