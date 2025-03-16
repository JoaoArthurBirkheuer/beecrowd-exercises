#include <iostream>
#include <vector>
using namespace std;

bool ordenado(const vector<int>& array);
int posicMaior(const vector<int>& array, int tamanho);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int tam, trocas = 0;
        cin >> tam;
        vector<int> vetor(tam);
        for (int i = 0; i < tam; i++) cin >> vetor[i];

        int posic = tam - 1;

        while (!ordenado(vetor)) {
            int pm = posicMaior(vetor, posic + 1);
            if (pm < posic) {
                for (int j = pm; j < posic; j++) {
                    swap(vetor[j], vetor[j + 1]);
                    trocas++;
                }
            }
            posic--;
        }

        cout << "Optimal train swapping takes " << trocas << " swaps.\n";
    }
    return 0;
}

bool ordenado(const vector<int>& array) {
    for (size_t i = 0; i < array.size() - 1; i++) {
        if (array[i] > array[i + 1]) return false;
    }
    return true;
}

int posicMaior(const vector<int>& array, int tamanho) {
    int maior = array[0], posic = 0;
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
            posic = i;
        }
    }
    return posic;
}
