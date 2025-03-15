#include <iostream>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

int main() {
    string cifra, letras;
    int y, z;
    while (cin >> y >> z) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa o buffer corretamente
        getline(cin, cifra);
        getline(cin, letras);

        string mapeamento(256, 0);
        for (int i = 0; i < letras.size(); i++) {
            mapeamento[toupper(letras[i])] = toupper(cifra[i]);
            mapeamento[tolower(letras[i])] = tolower(cifra[i]);
            mapeamento[toupper(cifra[i])] = toupper(letras[i]);
            mapeamento[tolower(cifra[i])] = tolower(letras[i]);
        }

        for (int j = 0; j < z; j++) {
            string exemplo;
            getline(cin, exemplo);
            for (char &ch : exemplo) {
                char substituto = mapeamento[ch];
                cout << (substituto ? substituto : ch);
            }
            cout << endl;
        }
        cout<<endl;
    }

    return 0;
}
