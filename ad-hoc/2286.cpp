#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, test_case = 1;
    cin >> n;

    while (n != 0) {
        string nomePar, nomeImpar;

        cin.ignore();
        getline(cin, nomePar);
        getline(cin, nomeImpar);

        cout << "Teste " << test_case << endl;

        for (int i = 0; i < n; ++i) {
            int par, impa;
            cin >> par >> impa;
            int soma = par + impa;

            if (soma % 2 == 0)
                cout << nomePar << endl;
            else
                cout << nomeImpar << endl;
        }
        cout << endl;
        test_case++;
        cin >> n;
    }

    return 0;
}
