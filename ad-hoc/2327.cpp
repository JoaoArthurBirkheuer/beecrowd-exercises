#include <iostream>
using namespace std;

bool verificarSomasIguais(int *somas, int tamanho) {
    int somaReferencia = somas[0];
    for (int i = 1; i < tamanho; i++) {
        if (somas[i] != somaReferencia) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    int quadrado[t][t];
    int somaLinhas[t] = {0}, somaColunas[t] = {0};
    int somaDiagonais[2] = {0, 0};

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cin >> quadrado[i][j];
        }
    }

    // Verificação das somas das linhas e colunas
    int somaReferencia = 0;

    for (int i = 0; i < t; i++) {
        somaLinhas[i] = 0;
        for (int j = 0; j < t; j++) {
            somaLinhas[i] += quadrado[i][j];
            somaColunas[j] += quadrado[i][j];
        }
        if (i == 0) {
            somaReferencia = somaLinhas[i];
        } else if (somaLinhas[i] != somaReferencia) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int j = 0; j < t; j++) {
        if (somaColunas[j] != somaReferencia) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < t; i++) {
        somaDiagonais[0] += quadrado[i][i];
        somaDiagonais[1] += quadrado[i][t-1-i];
    }

    if (somaDiagonais[0] != somaReferencia || somaDiagonais[1] != somaReferencia) {
        cout << -1 << endl;
    } else {
        cout << somaReferencia << endl;
    }

    return 0;
}
