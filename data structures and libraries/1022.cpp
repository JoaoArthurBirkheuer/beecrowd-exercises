#include <iostream>
#include <numeric> // lcm() and gcd()
using namespace std;
 
int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int iterations, n1, d1, n2, d2;
    char blank, op;
    cin >> iterations;
    while(iterations--){
        int n3, d3;
        cin >> n1 >> blank >> d1 >> op >> n2 >> blank >> d2;
        d3 = op == '/' ? d1 * n2 : d1 * d2;
        if(op == '+') n3 = (n1*d3)/d1 + (n2*d3)/d2;
        else if(op == '-') n3 = (n1*d3)/d1 - (n2*d3)/d2;
        else if(op == '*') n3 = n1 * n2;
        else n3 = n1 * d2;
        int mdc = gcd(n3, d3);
        cout << n3 << "/" << d3 << " = " << n3/mdc << "/" << d3/mdc << endl;
    }
 
    return 0;
}