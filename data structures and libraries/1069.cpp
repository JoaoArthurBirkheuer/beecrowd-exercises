#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(); // Limpa o buffer do teclado
    for (int t = 0; t < N; ++t)
    {
        string entrada;
        getline(cin, entrada);

        // Remover todos os caracteres '.' da sequência
        string entradaLimpa = "";
        for (char c : entrada)
            if (c != '.')
                entradaLimpa += c;

        int quantidadeDiamantes = 0;
        int quantidadeAberturas = 0;

        // Iterar sobre a sequência para contar o número de diamantes
        for (char c : entradaLimpa)
        {
            if (c == '<')
                ++quantidadeAberturas;
            else if (c == '>' && quantidadeAberturas > 0)
            {
                // Se encontrar um '>' e houver um '<' aberto,
                // significa que um diamante foi extraído
                ++quantidadeDiamantes;
                --quantidadeAberturas; // Reduz o contador de '<' abertos
            }
        }
        cout << quantidadeDiamantes << endl;
    }
    return 0;
}
