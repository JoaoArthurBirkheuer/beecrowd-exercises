#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int n1, n2, respostaDada;
        char op, ignore;
        cin >> n1 >> op >> n2 >> ignore >> respostaDada;

        int resposta = 0;
        if (op == '+') {
            resposta = abs(respostaDada - (n1 + n2));
        } else if (op == '-') {
            resposta = abs(respostaDada - (n1 - n2));
        } else {
            resposta = abs(respostaDada - (n1 * n2));
        }

        cout << "E";
        for (int j = 0; j < resposta; j++) {
            cout << "r";
        }
        cout << "ou!" << endl;
    }

    return 0;
}
