#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    int t;
    while (cin >> t) {
        if (t == 0) break;
        cin.ignore();

        map<string, string> mapa;
        map<string, string> inverso;
        bool bemDefinida = true;
        bool injetora = true;

        while (t--) {
            string linha;
            getline(cin, linha);

            istringstream iss(linha);
            string chave, elemento;
            getline(iss, chave, ' ');
            getline(iss, elemento);

            // Verifica se a chave já existe no mapa
            auto it = mapa.find(chave);
            if (it != mapa.end()) {
                if (it->second != elemento) {
                    bemDefinida = false;
                }
            } else {
                mapa[chave] = elemento;
                // Verifica se o valor já está associado a uma chave diferente
                if (inverso.find(elemento) != inverso.end()) {
                    injetora = false;
                }
                inverso[elemento] = chave; // Armazena a chave associada ao valor
            }
        }
        // Verificar se a função é bem definida e injetora
        if (!bemDefinida) {
            cout << "Not a function." << endl;
        } else if (!injetora) {
            cout << "Not invertible." << endl;
        } else {
            cout << "Invertible." << endl;
        }
    }
    return 0;
}
