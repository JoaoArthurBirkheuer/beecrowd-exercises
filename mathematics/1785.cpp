#include <bits/stdc++.h>
using namespace std;

string addLeadingZeros(string str) {
    while (str.length() < 4) str = '0' + str;
    return str;
}

int kaprekar(int x) {
    int cont = 0;

    while (x != 6174) {
        string numStr = to_string(x);
        numStr = addLeadingZeros(numStr);

        // pode usar sort nas strings
        string asc = numStr, desc = numStr;
        sort(asc.begin(), asc.end());
        sort(desc.rbegin(), desc.rend());

        int menor = stoi(asc);
        int maior = stoi(desc);

        x = maior - menor;
        cont++;

        if (x == 0) return -1;
    }

    return cont;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        string numAsString = to_string(num);

        numAsString = addLeadingZeros(numAsString);

        if (numAsString[0] == numAsString[1] &&
            numAsString[0] == numAsString[2] &&
            numAsString[0] == numAsString[3]) {
            cout << "Caso #" << i << ": -1\n";
            continue;
        }

        cout << "Caso #" << i << ": " << kaprekar(num) << "\n";
    }

    return 0;
}
