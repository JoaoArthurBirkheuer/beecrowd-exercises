#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, mudar;
    cin >> x;
    cin.ignore();

    while (x--) {
        string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string str = "";
        getline(cin, str);
        cin >> mudar;
        cin.ignore();

        for (char c : str) {
            if (c == ' ') {
                cout << ' ';
                continue;
            }
            int index = letras.find(c);
            int newIndex = (index - mudar + 26) % 26;
            cout << letras[newIndex];
        }
        cout << endl;
    }

    return 0;
}
