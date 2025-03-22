#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    while(getline(cin, s1) && getline(cin, s2))
    {
        if(s1.length() > s2.length()) swap(s1, s2);

        int ms = 0;

        for(size_t i = 0; i < s1.length(); i++)
        {
            size_t foundPos = s2.find(s1[i]);
            while(foundPos != string::npos)
            {
                int aux = 0;
                size_t j = foundPos;

                while(i + aux < s1.length() && j + aux < s2.length() && s1[i + aux] == s2[j + aux]) aux++;

                ms = max(ms, aux);
                foundPos = s2.find(s1[i], foundPos + 1);
            }
        }
        cout << ms << endl;
    }
    return 0;
}
