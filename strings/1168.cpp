#include <iostream>
#include <string>

using namespace std;

int main() {

    int numero, soma;
    char leds[102];

    int vetor[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    cin >> numero;

    for (int j = 0; j < numero; j++) {
        soma = 0;
        cin >> leds;

        for (int i = 0; leds[i] != '\0'; i++)
            soma += vetor[leds[i] - '0'];

        cout << soma << " leds" << endl;
    }

    return 0;
}
