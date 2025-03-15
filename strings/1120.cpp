#include <iostream>
#include <string>

using namespace std;

int main() {
    string d, n;
    while (cin >> d >> n) {
        if (d == "0" && n == "0") break;

        char ch = d[0];
        string novaS = "";
        bool leadingZero = true;

        for (char c : n) {
            if (c != ch) {
                if (c != '0' || !leadingZero) {
                    novaS += c;
                    leadingZero = false;
                }
            }
        }

        if (novaS.empty()) novaS = "0";
        cout << novaS << endl;
    }
    return 0;
}
