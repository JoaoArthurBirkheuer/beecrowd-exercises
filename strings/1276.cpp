#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        if (str.empty()) {
            cout << endl;
            continue;
        }

        string aux = "";
        for (char c : str) if (c != ' ') aux += c;
        str = aux;
        sort(str.begin(), str.end());

        if (str.empty()) {
            cout << endl;
            continue;
        }

        char comeco = str[0], fim = str[0];
        bool first = true;

        for (int i = 1; i < str.length(); i++) {
            if (str[i] == fim) continue;

            if (str[i] == fim + 1) {
                fim = str[i];
            } else {
                if (!first) cout << ", ";
                cout << comeco << ":" << fim;
                first = false;

                comeco = fim = str[i];
            }
        }

        if (!first) cout << ", ";
        cout << comeco << ":" << fim;

        cout << endl;
    }
    return 0;
}
