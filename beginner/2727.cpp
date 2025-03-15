#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string input;
    while (getline(cin, input))
    {
        if(input.empty()) continue;
        stringstream ss(input);
        int x;
        ss >> x;
        if (x < 0 || x > 200) continue;  // Validação da entrada

        for (int inputs = 0; inputs < x; inputs++)
        {
            string linha;
            if (!getline(cin, linha)) break;  // Lê a linha de pontos e espaços

            int pontos = 0;
            int espacos = 0;
            bool encontrouEspaco = false;

            for (char c : linha)
            {
                if (c == '.' && !encontrouEspaco)
                {
                    pontos++;
                }
                else if (isspace(c))
                {
                    encontrouEspaco = true;
                    espacos++;
                }
            }

            int valor = pontos + (espacos * 3);
            if (valor >= 1 && valor <= 26)
            {
                cout << char('a' + valor - 1) << endl;
            }
            else
            {
                cout << "Valor fora do intervalo de letras" << endl;
            }
        }
    }
    return 0;
}
