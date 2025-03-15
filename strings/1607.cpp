#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned short casos;
    cin >> casos;

    while (casos--) {
        string string1, string2;
        cin >> string1 >> string2;

        unsigned soma = 0;
        for (size_t i = 0; i < string1.length(); i++) {
            short aux = string2[i] - string1[i];
            if (aux < 0)
                soma += aux + 26;
            else
                soma += aux;
        }

        cout << soma << endl;
    }

    return 0;
}
