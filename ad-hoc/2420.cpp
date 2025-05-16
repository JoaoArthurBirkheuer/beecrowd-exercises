#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    long long total = 0;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        total += a[i];
    }

    long long somaEsquerda = 0;

    for (int i = 0; i < N; ++i) {
        somaEsquerda += a[i];
        long long somaDireita = total - somaEsquerda;

        if (somaEsquerda == somaDireita) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
