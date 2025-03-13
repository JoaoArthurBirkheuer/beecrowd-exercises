#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;

    unsigned long long cont = 0;
    int digits = 1;
    int currentRangeStart = 1;
    int currentRangeEnd = 9;

    while (currentRangeStart <= t) {
        currentRangeEnd = min(currentRangeEnd, t); // limite superior
        cont += (currentRangeEnd - currentRangeStart + 1) * digits; // número de dígitos * quantidade de números
        currentRangeStart *= 10; // próxima faixa de números
        digits++; // incrementa a quantidade de dígitos
        currentRangeEnd = currentRangeStart * 10 - 1; // ajusta o limite superior da nova faixa
    }

    cout << cont << endl;

    return 0;
}
