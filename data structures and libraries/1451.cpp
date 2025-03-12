#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        list<char> result;
        auto cursor = result.begin();

        for (char ch : str)
        {
            if (ch == '[')
            {
                cursor = result.begin();
            }
            else if (ch == ']')
            {
                cursor = result.end();
            }
            else
            {
                result.insert(cursor, ch);
            }
        }
        for (char ch : result)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
