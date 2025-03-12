#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, k;

    while (cin >> m >> k) {
        int t = 0, p = -1, c = 0;
        bool tocaTodas = true;
        vector<int> tempo(m), musicasTocadas(k);

        for (int i = 0; i < m; i++) cin >> tempo[i];
        for (int i = 0; i < k; i++) cin >> musicasTocadas[i];

        vector<bool> ouvidas(m, false);

        for (int i = 0; i < k; i++) {
            int atual = musicasTocadas[i] - 1;
            if (!ouvidas[atual]) {
                ouvidas[atual] = true;
                c++;
            }

            t += tempo[atual];
            if (c == m) break;
        }

        tocaTodas = (c == m);
        cout << (tocaTodas ? t : -1) << endl;
    }

    return 0;
}
