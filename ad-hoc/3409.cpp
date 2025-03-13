#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    // Vetor para armazenar as notas e as quantidades de comida
    vector<int> P(N), W(N);

    for (int i = 0; i < N; ++i) {
        cin >> P[i] >> W[i];
    }

    // Inicializando a tabela para a Knapsack
    vector<int> dp(C + 1, 0);

    // Preenchendo a tabela dp
    for (int i = 0; i < N; ++i) {
        for (int j = C; j >= W[i]; --j) {
            dp[j] = max(dp[j], dp[j - W[i]] + P[i]);
        }
    }

    // O valor máximo que o tio de Júnior pode obter
    cout << dp[C] << endl;

    return 0;
}
