#include<iostream>
#include<string>
#include<cstring>
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

        int espacos = 0;
        for (char c : entrada)
            if (isspace(c))
                espacos++;

        string aux[espacos + 1];
        int k = 0;
        string palavra;
        for (char c : entrada)
        {
            if (!isspace(c))
                palavra += c;
            else
            {
                aux[k++] = palavra;
                palavra = "";
            }
        }
        aux[k++] = palavra;
        for (int i = 0; i < espacos; ++i)
        {
            for (int j = 0; j < espacos - i; ++j)
            {
                if (aux[j].length() < aux[j + 1].length())
                {
                    swap(aux[j], aux[j + 1]);
                }
            }
        }
        for (int i = 0; i <= espacos; ++i)
            (i == espacos)?(cout << aux[i] << endl):(cout << aux[i] << " ");
    }
    return 0;
}
