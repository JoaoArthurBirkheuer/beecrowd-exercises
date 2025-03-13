#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Processo {
    int t;
    int c;

    bool operator<(const Processo &outro) const {
        return c > outro.c;
    }
};

int main() {
    int n;

    while (cin >> n) {
        vector<pair<int, int>> processos(n);

        for (int i = 0; i < n; ++i) {
            cin >> processos[i].first >> processos[i].second;
        }

        sort(processos.begin(), processos.end());

        priority_queue<Processo> fila_prioridade;
        unsigned long long tempo_execucao = 0, espera = 0, i = 0;

        while (i < n || !fila_prioridade.empty()) {
            // Adiciona os processos à fila de prioridade se eles chegarem antes ou no tempo atual
            while (i < n && processos[i].first <= tempo_execucao) {
                fila_prioridade.push({processos[i].first, processos[i].second});
                ++i;
            }

            if (!fila_prioridade.empty()) {
                Processo p = fila_prioridade.top();
                fila_prioridade.pop();
                espera += tempo_execucao - p.t;
                tempo_execucao += p.c;
            } else {
                if (i < n) {
                    tempo_execucao = processos[i].first;
                }
            }
        }

        cout << espera << endl;
    }

    return 0;
}
