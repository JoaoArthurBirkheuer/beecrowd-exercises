#include <iostream>
#include <string>
using namespace std;

string maius(string s) {
    for (int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);
    return s;
}

// Função para verificar se o índice está dentro de uma tag válida
bool dentroDeTagValida(string &texto, int pos) {
    int openTag = -1;
    int closeTag = -1;

    for (int i = pos; i >= 0; i--) {
        if (texto[i] == '>') break;
        if (texto[i] == '<') {
            openTag = i;
            break;
        }
    }

    for (int i = pos; i < texto.size(); i++) {
        if (texto[i] == '<') break;
        if (texto[i] == '>') {
            closeTag = i;
            break;
        }
    }

    return openTag != -1 && closeTag != -1 && openTag < pos && pos < closeTag;
}

int main() {
    string s, ss, texto;

    while (getline(cin, s) && getline(cin, ss) && getline(cin, texto)) {
        string sUpper = maius(s);
        string ssUpper = ss;
        size_t index = 0;
        while ((index = maius(texto).find(sUpper, index)) != string::npos) {
            if (dentroDeTagValida(texto, index)) {
                texto.replace(index, s.length(), ssUpper);
                index += ss.length();
            } else {
                index += s.length();
            }
        }

        cout << texto << endl;
    }

    return 0;
}
