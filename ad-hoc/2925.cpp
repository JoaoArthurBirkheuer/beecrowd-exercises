#include <iostream>
using namespace std;

unsigned long long inverterDigitos(unsigned long long n);

int main() {
    int x;
    while(cin>>x){
        if (x == 0) cout << 0 << endl;
        else if (x == 1) cout << 1 << endl;
        else if (x == 2) cout << 2 << endl;
        else {
            unsigned long long anterior = 1, atual = 2;
                for (int i = 3; i <= x; i++) {
                unsigned long long auxAnterior = anterior >= 10 ? inverterDigitos(anterior) : anterior;
                unsigned long long auxAtual = atual >= 10 ? inverterDigitos(atual) : atual;
                unsigned long long proximo = auxAnterior + auxAtual;
                anterior = atual;
                atual = proximo;
            }
            cout << atual << endl;
        }
    }
    return 0;
}

unsigned long long inverterDigitos(unsigned long long n) {
    unsigned long long novoNum = 0;
    while (n != 0) {
        novoNum = novoNum * 10 + n % 10;
        n /= 10;
    }
    return novoNum;
}
