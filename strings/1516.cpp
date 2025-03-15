#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        if (N == 0 && M == 0) break;

        string desenho[N];
        for (int i = 0; i < N; i++) {
            cin >> desenho[i];
        }

        int A, B;
        cin >> A >> B;

        int factorA = A / N;
        int factorB = B / M;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < factorA; j++) {
                for (int k = 0; k < M; k++) {
                    for (int l = 0; l < factorB; l++) {
                        cout << desenho[i][k];
                    }
                }
                cout << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
