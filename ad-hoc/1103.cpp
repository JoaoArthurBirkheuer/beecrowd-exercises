#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int inicio, fim;

    while (true) {
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        if (a == 0)
            inicio = 24 * 60 + b;
        else
            inicio = a * 60 + b;

        if (c == 0)
            fim = 24 * 60 + d;
        else
            fim = c * 60 + d;

        if (fim > inicio)
            cout << fim - inicio << endl;
        else
            cout << 24 * 60 - (inicio - fim) << endl;
    }

    return 0;
}
