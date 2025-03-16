#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int caminho[n] = {0};

    while (m--) {
        int posic, valor;
        cin >> posic >> valor;
        posic--;

        for (int i = posic; i < n; i += valor) {
            caminho[i] = 1;
        }
        for (int i = posic; i >= 0; i -= valor) {
            caminho[i] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << caminho[i] << endl;
    }

    return 0;
}
