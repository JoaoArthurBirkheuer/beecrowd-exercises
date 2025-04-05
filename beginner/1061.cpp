#include <iostream>
using namespace std;

int main() {
    string trash;
    int dia_i, dia_f, hora_i, hora_f, minuto_i, minuto_f, segundo_i, segundo_f;

    cin >> trash >> dia_i;
    cin >> hora_i >> trash >> minuto_i >> trash >> segundo_i;
    cin >> trash >> dia_f;
    cin >> hora_f >> trash >> minuto_f >> trash >> segundo_f;

    int inicio = segundo_i + minuto_i * 60 + hora_i * 3600 + dia_i * 86400;
    int fim = segundo_f + minuto_f * 60 + hora_f * 3600 + dia_f * 86400;

    int duracao = fim - inicio;

    int dias = duracao / 86400;
    duracao %= 86400;
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
