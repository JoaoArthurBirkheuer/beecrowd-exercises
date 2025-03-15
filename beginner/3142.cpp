#include <iostream>
#include <string>
using namespace std;

int posPorValor(int x);

int main() {
    string col;
    while(getline(cin, col)) {
        int valor = 0;
        int len = col.length();

        if (len == 1) {
            valor = posPorValor((int)col[0]);
        } else if (len == 2) {
            valor = 26 * posPorValor((int)col[0]) + posPorValor((int)col[1]);
        } else if (len == 3) {
            valor = (26 * 26 * posPorValor((int)col[0])) + (26 * posPorValor((int)col[1])) + posPorValor((int)col[2]);
        } else {
            for (int i = 0; i < len; i++) {
                valor = valor * 26 + posPorValor((int)col[i]);
            }
        }

        if(valor > 16384 || valor < 1) {
            cout << "Essa coluna nao existe Tobias!\n";
        } else {
            cout << valor << endl;
        }
    }
    return 0;
}

int posPorValor(int x) {
    return x - 'A' + 1;
}
