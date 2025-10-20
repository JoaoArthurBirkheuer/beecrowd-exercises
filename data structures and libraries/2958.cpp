#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, m;
    string it;
    vector<int> life;
    vector<int> discipline;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> it;
            if(it[1] == 'V') life.push_back(it[0] - '0');
            else discipline.push_back(it[0] - '0');
        }
    }
    sort(life.rbegin(), life.rend());
    sort(discipline.rbegin(), discipline.rend());
    for(int item : life) cout << item << "V" << endl;
    for(int item : discipline) cout << item << "D" << endl;
    return 0;
}