#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; // Número de casos de teste
    cin >> T;

    for (int caso = 1; caso <= T; ++caso) {
        string S;
        cin >> S;

        int Q; // Número de operações
        cin >> Q;

        // Vetores para armazenar índices das vogais e consoantes
        vector<int> vogais, consoantes;
        unordered_set<char> conjuntoVogais = {'a', 'e', 'i', 'o', 'u'};

        // Mapeia as posições iniciais de vogais e consoantes
        for (int i = 0; i < S.size(); ++i) {
            if (conjuntoVogais.count(S[i]))
                vogais.push_back(i);
            else
                consoantes.push_back(i);
        }

        // Deslocamentos acumulados
        int deslocamentoVogais = 0, deslocamentoConsoantes = 0;

        cout << "Caso #" << caso << ":\n";
        while (Q--) {
            int tipo;
            cin >> tipo;

            if (tipo == 0) { // Operação 0 x
                int x;
                cin >> x;
                if (!vogais.empty()) {
                    deslocamentoVogais = (deslocamentoVogais + x) % vogais.size();
                }
            } else if (tipo == 1) { // Operação 1 x
                int x;
                cin >> x;
                if (!consoantes.empty()) {
                    deslocamentoConsoantes = (deslocamentoConsoantes + x) % consoantes.size();
                }
            } else if (tipo == 2) { // Operação 2
                string resultado = S;

                // Reorganizar as vogais
                if (!vogais.empty()) {
                    vector<char> vogaisOrdenadas(vogais.size());
                    for (int i = 0; i < vogais.size(); ++i) {
                        vogaisOrdenadas[(i + deslocamentoVogais) % vogais.size()] = S[vogais[i]];
                    }
                    for (int i = 0; i < vogais.size(); ++i) {
                        resultado[vogais[i]] = vogaisOrdenadas[i];
                    }
                }

                // Reorganizar as consoantes
                if (!consoantes.empty()) {
                    vector<char> consoantesOrdenadas(consoantes.size());
                    for (int i = 0; i < consoantes.size(); ++i) {
                        consoantesOrdenadas[(i + deslocamentoConsoantes) % consoantes.size()] = S[consoantes[i]];
                    }
                    for (int i = 0; i < consoantes.size(); ++i) {
                        resultado[consoantes[i]] = consoantesOrdenadas[i];
                    }
                }

                cout << resultado << "\n";
            }
        }
    }

    return 0;
}