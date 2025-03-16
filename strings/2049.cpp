#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int cont = 1;
    bool primeira = true;

    while (getline(cin, s)) {
        if (s == "0") break;

        if (!primeira) {
            cout << "\n";
        }
        primeira = false;

        string ss;
        getline(cin, ss);

        cout << "Instancia " << cont << "\n";
        if (ss.find(s) != string::npos) {
            cout << "verdadeira\n";
        } else {
            cout << "falsa\n";
        }

        cont++;
    }

    return 0;
}
