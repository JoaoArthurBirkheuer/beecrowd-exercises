#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

string minuscula(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    string aux, st;
    set<string> dicionario;

    while (getline(cin, st)) {
        aux = "";
        for (char c : st) {
            if (!isalpha(c)) {
                if (!aux.empty()) {
                    dicionario.insert(minuscula(aux));
                    aux = "";
                }
            } else {
                aux += tolower(c);
            }
        }
        if (!aux.empty()) {
            dicionario.insert(minuscula(aux));
        }
    }

    for (const string& s : dicionario) {
        if (!s.empty()) {
            cout << s << endl;
        }
    }

    return 0;
}
