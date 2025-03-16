#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool verificaLinhaColuna(const int m[9][9]) {
    for (int i = 0; i < 9; i++) {
        vector<int> linha = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int j = 0; j < 9; j++) {
            auto it = find(linha.begin(), linha.end(), m[i][j]);
            if (it != linha.end()) {
                linha.erase(it);
            }
        }
        if (!linha.empty()) {
            return false;
        }

        vector<int> coluna = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int j = 0; j < 9; j++) {
            auto it = find(coluna.begin(), coluna.end(), m[j][i]);
            if (it != coluna.end()) {
                coluna.erase(it);
            }
        }
        if (!coluna.empty()) {
            return false;
        }
    }
    return true;
}

bool verificaSubquadrados(const int m[9][9]) {
    for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) {
            vector<int> quadrado = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            for (int i = row; i < row + 3; i++) {
                for (int j = col; j < col + 3; j++) {
                    auto it = find(quadrado.begin(), quadrado.end(), m[i][j]);
                    if (it != quadrado.end()) {
                        quadrado.erase(it);
                    }
                }
            }
            if (!quadrado.empty()) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m[9][9];
    int t, aux = 1;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> m[i][j];
            }
        }

        bool nao = false;
        if (!verificaLinhaColuna(m)) {
            nao = true;
        }
        if (!nao && !verificaSubquadrados(m)) {
            nao = true;
        }

        if (nao) {
            cout << "Instancia " << aux << endl << "NAO\n\n";
        } else {
            cout << "Instancia " << aux << endl << "SIM\n\n";
        }
        aux++;
    }

    return 0;
}
