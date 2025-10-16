#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    long long int n1, n2, sum;
    cin >> n1 >> n2;
    long long int n = n2 - n1, an = n1 + n - 1;
    sum = ((n1 + an) * n)/2 + n2;
    cout << sum << endl;
 
    return 0;
}