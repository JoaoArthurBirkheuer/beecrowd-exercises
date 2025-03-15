#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int x = 0;
    bool first = true;
    while (cin >> x) {
        if (x == 0)
            break;

        if (!first)
            cout << endl;
        else
            first = false;

        int tamanho = 0;
        cin.ignore();
        vector<string> strin(x);
        for (int j = 0; j < x; j++) {
            getline(cin, strin[j]);
            if (tamanho < strin[j].length())
                tamanho = strin[j].length();
        }

        for (int j = 0; j < x; j++) {
            for (int k = 0; k < tamanho - strin[j].length(); k++)
                cout << " ";
            cout << strin[j] << endl;
        }
    }
    return 0;
}
