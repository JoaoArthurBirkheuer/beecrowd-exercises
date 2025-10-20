#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    vector<long long> bit;
    int n;
    Fenwick(int n): n(n), bit(n + 1, 0) {}

    void add(int idx, long long val) {
        for (++idx; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }

    long long sum(int idx) {
        long long res = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            res += bit[idx];
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n;
    vector<int> buggies(n);
    Fenwick fenw(n);

    for (int i = 0; i < n; i++) {
        cin >> buggies[i];
        fenw.add(i, buggies[i]);
    }

    int index;
    char op;
    while (cin >> op >> index) {
        index--;
        if (op == 'a') {
            fenw.add(index, -buggies[index]);
            buggies[index] = 0;
        } else {
            cout << fenw.sum(index - 1) << '\n';
        }
    }
}

/*#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, e;
    cin >> n;
    vector<int> buggies;
    for(int i=0; i<n; i++){
        cin >> e;
        buggies.push_back(e);
    }
    
    int index;
    char op;
    while(cin >> op >> index){
        index--;
        if(op == 'a') buggies[index] = 0;
        else cout << accumulate(buggies.begin(), 
        buggies.begin() + index, 0) << endl;
    }
    return 0;
}*/