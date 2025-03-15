#include <iostream>
#include <string>
using namespace std;

string removerUmEspaco(string str)
{
    string aux = "";
    bool espacoRemovivel = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (isspace(str[i]) && (i + 1 < str.length()) && (str[i + 1] == ',' || str[i + 1] == '.'))
        {
            espacoRemovivel = true;
        }
        else
        {
            if (!(espacoRemovivel && isspace(str[i])))
            {
                aux += str[i];
            }
            espacoRemovivel = false;
        }
    }

    return aux;
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        cout << removerUmEspaco(str) << endl;
    }
    return 0;
}

