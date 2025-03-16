#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        string n = "oulupukk";
        getline(cin, s);
        size_t found = 0;
        while ((found = s.find(n, found)) != string::npos)
        {
            // Verificar o caractere anterior e o posterior à substring "oulupukk"
            if (found > 0 && isalpha(s[found - 1])) {
                s[found - 1] = 'J';
            }

            if (found + n.length() < s.length() && isalpha(s[found + n.length()])) {
                s[found + n.length()] = 'i';
            }

            s.replace(found, n.length(), "oulupukk");

            found += 10;
        }
        cout << s << endl;
    }

    return 0;
}
