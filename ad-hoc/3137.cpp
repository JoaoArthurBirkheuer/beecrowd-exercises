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
        cont += (currentRangeEnd - currentRangeStart + 1) * digits; // n�mero de d�gitos * quantidade de n�meros
        currentRangeStart *= 10; // pr�xima faixa de n�meros
        digits++; // incrementa a quantidade de d�gitos
        currentRangeEnd = currentRangeStart * 10 - 1; // ajusta o limite superior da nova faixa
    }

    cout << cont << endl;

    return 0;
}
