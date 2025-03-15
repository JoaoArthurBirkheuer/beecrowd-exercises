#include <iostream>
using namespace std;

void encontrarBrinquedos(int casas[], int tamanho, int somaDesejada) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        int somaAtual = casas[inicio] + casas[fim];
        if (somaAtual == somaDesejada) {
            cout << casas[inicio] << " " << casas[fim] << endl;
            return;
        } else if (somaAtual < somaDesejada) {
            inicio++;
        } else {
            fim--;
        }
    }

    cout << "Não foi possível encontrar os brinquedos." << endl;
}

int main() {
    int N;
    cin >> N;

    int casas[N];
    for (int i = 0; i < N; i++) {
        cin >> casas[i];
    }

    int somaDesejada;
    cin >> somaDesejada;

    encontrarBrinquedos(casas, N, somaDesejada);

    return 0;
}
