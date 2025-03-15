#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    cin >> x;
    cin.ignore();

    while (x--) {
        string p;
        getline(cin, p);

        if (p.length() == 5)
            cout << 3 << endl;
        else if ((p[0] == 'o' && p[1] == 'n') ||
                 (p[0] == 'o' && p[2] == 'e') ||
                 (p[1] == 'n' && p[2] == 'e'))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}
