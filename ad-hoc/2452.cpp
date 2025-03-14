#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int tamanho, gotas;
    cin >> tamanho >> gotas;
    vector<int> v(tamanho, 0);
    vector<int> posicValida;

    for (int i = 0; i < gotas; i++) {
        int gota;
        cin >> gota;
        v[gota - 1] = 1;
        posicValida.push_back(gota - 1);
    }

    int cont = tamanho - gotas;
    int dias = 0;

    while (cont > 0) {
        vector<int> novasPosicoesValidas;

        for (int i : posicValida) {
            if (i - 1 >= 0 && v[i - 1] == 0) {
                v[i - 1] = 1;
                novasPosicoesValidas.push_back(i - 1);
                cont--;
            }
            if (i + 1 < tamanho && v[i + 1] == 0) {
                v[i + 1] = 1;
                novasPosicoesValidas.push_back(i + 1);
                cont--;
            }
        }

        posicValida = novasPosicoesValidas;
        dias++;
    }

    cout << dias << endl;
    return 0;
}
