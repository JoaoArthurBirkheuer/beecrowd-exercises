#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned n1, n2;
    while (cin >> n1 >> n2) {
        unsigned binario1[32] = {0}, binario2[32] = {0}, resultado[32] = {0};

        for (int i = 0; n1 > 0; ++i) {
            binario1[31 - i] = n1 % 2;
            n1 /= 2;
        }

        for (int i = 0; n2 > 0; ++i) {
            binario2[31 - i] = n2 % 2;
            n2 /= 2;
        }

        for (int i = 31; i >= 0; --i) {
            if (binario1[i] == 1 && binario2[i] == 1) {
                resultado[i] = 0;
            } else if (binario1[i] == 1 || binario2[i] == 1) {
                resultado[i] = 1;
            } else {
                resultado[i] = 0;
            }
        }

        unsigned soma = 0;
        for (int i = 0; i < 32; ++i) {
            if (resultado[i] == 1) {
                soma += static_cast<unsigned>(pow(2, 31 - i));
            }
        }

        cout << soma << endl;
    }

    return 0;
}
