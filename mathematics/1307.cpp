#include <iostream>
#include <string>
using namespace std;

long long binarioParaDecimal(string bin) {
    long long decimal = 0;
    long long base = 1;

    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

long long mdc(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 1; i <= t; i++) {
        string n1, n2;
        getline(cin, n1);
        getline(cin, n2);

        long long decimalN1 = binarioParaDecimal(n1);
        long long decimalN2 = binarioParaDecimal(n2);

        long long resultadoMDC = mdc(decimalN1, decimalN2);

        if (resultadoMDC > 1) {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        } else {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
        }
    }

    return 0;
}
