#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    
    set<pair<int, int>> quadrantes;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        pair<int, int> pos = {x, y};
        
        if (quadrantes.find(pos) != quadrantes.end()) {
            cout << "1" << endl;
            return 0;
        }
        
        quadrantes.insert(pos);
    }
    
    cout << "0" << endl;
    return 0;
}