#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int inf;
    while (cin >> inf) {
        if (inf == 0) break;

        map<char, int> tempoPorProblema;
        map<char, bool> problemaResolvido;
        map<char, int> penalidade;

        int totalTempo = 0, contCorreto = 0;
        char letra;
        int tempo;
        string resposta;

        while (inf--) {
            cin >> letra >> tempo >> resposta;

            if (!problemaResolvido[letra]) {
                if (resposta == "incorrect") {
                    penalidade[letra] += 20;
                } else if (resposta == "correct") {
                    totalTempo += tempo + penalidade[letra];
                    contCorreto++;
                    problemaResolvido[letra] = true;
                }
            }
        }

        cout << contCorreto << " " << totalTempo << endl;
    }

    return 0;
}

