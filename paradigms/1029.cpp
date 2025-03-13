#include <iostream>
using namespace std;

unsigned long long fibonacciCalls(unsigned long long n, unsigned long long& callCount) {
    callCount++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciCalls(n - 1, callCount) + fibonacciCalls(n - 2, callCount);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long fb;
        cin >> fb;
        unsigned long long callCount = -1;
        unsigned long long fibValue = fibonacciCalls(fb, callCount);
        cout << "fib(" << fb << ") = " << callCount << " calls = " << fibValue << endl;
    }

    return 0;
}
