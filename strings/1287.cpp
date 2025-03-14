#include <iostream>
#include <string>
#include <climits>  // Para UINT_MAX

using namespace std;

int main()
{
    string st;

    while (getline(cin, st))
    {
        string result = "";
        bool achouNumeroOuLetra = false, negativo = false, invalido = false;

        for (char c : st)
        {
            if (c == 'O' || c == 'o')
            {
                result += '0';
                achouNumeroOuLetra = true;
            }
            else if (c == 'l')
            {
                result += '1';
                achouNumeroOuLetra = true;
            }
            else if (isdigit(c))
            {
                result += c;
                achouNumeroOuLetra = true;
            }
            else if (c == '-' || !isspace(c) && c != ',')
            {
                negativo = true;
                break;
            }
        }

        if (negativo || !achouNumeroOuLetra)
        {
            cout << "error" << endl;
            continue;
        }
        try
        {
            unsigned long isso = stoul(result);
            if (isso > INT_MAX)
            {
                cout << "error" << endl;
            }
            else
            {
                cout << isso << endl;
            }
        }
        catch (const std::exception& e)     // Captura tanto invalid_argument quanto out_of_range
        {
            cout << "error" << endl;
        }
    }

    return 0;
}
