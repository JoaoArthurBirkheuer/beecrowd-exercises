#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    while (true) {
        int nVagoes;
        cin >> nVagoes;
        cin.ignore();

        if (nVagoes == 0) {
            break;
        }

        while (true) {
            string saida;
            getline(cin, saida);
            if (saida == "0") {
                break;
            }

            stringstream ss(saida);
            vector<int> saidaList;
            int num;
            while (ss >> num) {
                saidaList.push_back(num);
            }

            vector<int> entrada(nVagoes);
            for (int i = 0; i < nVagoes; ++i) {
                entrada[i] = i + 1;
            }

            stack<int> estacao;
            int j = 0;
            bool possivel = true;

            for (int vagon : entrada) {
                estacao.push(vagon);

                while (!estacao.empty() && j < saidaList.size() && estacao.top() == saidaList[j]) {
                    estacao.pop();
                    j++;
                }
            }

            if (j == saidaList.size()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
