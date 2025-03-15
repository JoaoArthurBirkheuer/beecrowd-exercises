#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, voto;
        cin >> n >> m;

        vector<int> vet(n + 1, 0);
        for (int i = 0; i < m; i++) {
            cin >> voto;
            if (voto >= 1 && voto <= n) {
                vet[voto]++;
            }
        }

        int maior = 0, candidato = -1;
        for (int i = 1; i <= n; i++) {
            if (vet[i] > maior) {
                maior = vet[i];
                candidato = i;
            }
        }

        if (static_cast<float>(maior) / m > 0.5) {
            cout << candidato << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
