#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int andares, comeco, objetivo, cima, baixo;
    cin >> andares >> comeco >> objetivo >> cima >> baixo;

    if (comeco == objetivo) {
        cout << "0\n"; // Já está no andar objetivo
        return 0;
    }

    if ((comeco < objetivo && cima == 0) || (comeco > objetivo && baixo == 0)) {
        cout << "use the stairs\n"; // Não há como subir ou descer
        return 0;
    }

    if (cima == 0 && baixo == 0) {
        cout << "use the stairs\n"; // O elevador não se move
        return 0;
    }

    vector<bool> visitado(andares + 1, false);
    queue<pair<int, int>> q;
    q.push({comeco, 0});
    visitado[comeco] = true;

    while (!q.empty()) {
        int andarAtual = q.front().first;
        int contApertadas = q.front().second;
        q.pop();

        // Movimento para cima
        if (andarAtual + cima <= andares && !visitado[andarAtual + cima]) {
            if (andarAtual + cima == objetivo) {
                cout << contApertadas + 1 << '\n';
                return 0;
            }
            q.push({andarAtual + cima, contApertadas + 1});
            visitado[andarAtual + cima] = true;
        }

        // Movimento para baixo
        if (andarAtual - baixo >= 1 && !visitado[andarAtual - baixo]) {
            if (andarAtual - baixo == objetivo) {
                cout << contApertadas + 1 << '\n';
                return 0;
            }
            q.push({andarAtual - baixo, contApertadas + 1});
            visitado[andarAtual - baixo] = true;
        }
    }

    cout << "use the stairs\n";
    return 0;
}
