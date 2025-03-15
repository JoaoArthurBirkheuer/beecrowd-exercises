#include <iostream>
#include <string>
using namespace std;
int
main ()
{
    string str = "";
    cin.ignore ();
    while (getline (cin, str))
    {
        if (str == "*")
            break;
        int spaces = 0;
        bool dif = false;
        for (int i = 0; i < str.length (); i++)
            if (isspace (str[i]))
                spaces++;
        char firstLetters[spaces + 1];
        for (int i = 0, k = 0; i < str.length (); i++)
        {
            if(i==0||isalpha(str[i])&&isspace(str[i-1]))
            {
                firstLetters[k] = tolower(str[i]);
                k++;
            }
        }
        char aux = firstLetters[0];
        for (int i = 0; i < spaces + 1; i++)
        {
            if (firstLetters[i] != aux)
            {
                dif = true;
                break;
            }
        }
        if (dif)
            cout << "N\n";
        else
            cout << "Y\n";
    }
    return 0;
}
