#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> posicoes(16);
    for (int i = 0; i < 16; i++)
        cin >> posicoes[i];

    // Encontra as posições dos jogadores 1 e 9
    int pos1 = find(posicoes.begin(), posicoes.end(), 1) - posicoes.begin();
    int pos9 = find(posicoes.begin(), posicoes.end(), 9) - posicoes.begin();

    // Determina a fase baseada na estrutura da chave
    if ((pos1 / 8) != (pos9 / 8)) {
        cout << "final\n";
    } else if ((pos1 / 4) != (pos9 / 4)) {
        cout << "semifinal\n";
    } else if ((pos1 / 2) != (pos9 / 2)) {
        cout << "quartas\n";
    } else {
        cout << "oitavas\n";
    }

    return 0;
}
