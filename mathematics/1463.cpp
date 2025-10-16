#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int ages, age;
        vector<int> v;
        cin >> ages;
        for(int i=0; i<ages; i++){
            cin >> age;
            v.push_back(age);
        }
        sort(v.begin(),v.end());
        cout << "Case " << i << ": " << v[v.size()/2] << endl;
    }
 
    return 0;
}