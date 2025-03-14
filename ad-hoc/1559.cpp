#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        bool ganho = false;
        int m[4][4];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> m[i][j];
                if (m[i][j] == 2048) ganho = true;
            }
        }
        if (ganho) {
            cout << "NONE\n";
            continue;
        }

        bool descer = false, esquerda = false, direita = false, subir = false;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                if (m[j][i] != 0 && (m[j + 1][i] == 0 || m[j + 1][i] == m[j][i])) {
                    descer = true;
                    break;
                }
            }
            if (descer) break;
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (m[i][j] != 0 && (m[i][j - 1] == 0 || m[i][j - 1] == m[i][j])) {
                    esquerda = true;
                    break;
                }
            }
            if (esquerda) break;
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 2; j >= 0; j--) {
                if (m[i][j] != 0 && (m[i][j + 1] == 0 || m[i][j + 1] == m[i][j])) {
                    direita = true;
                    break;
                }
            }
            if (direita) break;
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (m[j][i] != 0 && (m[j - 1][i] == 0 || m[j - 1][i] == m[j][i])) {
                    subir = true;
                    break;
                }
            }
            if (subir) break;
        }

        if (descer || esquerda || direita || subir) {
            if (descer) cout << "DOWN";
            if (esquerda) cout << (descer ? " LEFT" : "LEFT");
            if (direita) cout << (descer || esquerda ? " RIGHT" : "RIGHT");
            if (subir) cout << (descer || esquerda || direita ? " UP" : "UP");
        } else {
            cout << "NONE";
        }
        cout << endl;
    }
    return 0;
}
