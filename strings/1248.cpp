#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        bool cheater = false, achou = false;
        string dietaS, breakF, lunch;
        vector<char> dieta;
        getline(cin, dietaS);

        for (char c : dietaS)
            dieta.push_back(c);

        getline(cin, breakF);
        getline(cin, lunch);

        for (int pos = 0; pos < breakF.size(); pos++)
        {
            achou = false;
            for (int poss = 0; poss < dieta.size(); poss++)
            {
                if (breakF[pos] == dieta[poss])
                {
                    achou = true;
                    dieta.erase(dieta.begin() + poss);
                    break;
                }
            }
            if (!achou)
            {
                cheater = true;
                break;
            }
        }
        if (cheater)
        {
            cout << "CHEATER\n";
            continue;
        }

        for (int pos = 0; pos < lunch.size(); pos++)
        {
            achou = false;
            for (int poss = 0; poss < dieta.size(); poss++)
            {
                if (lunch[pos] == dieta[poss])
                {
                    achou = true;
                    dieta.erase(dieta.begin() + poss);
                    break;
                }
            }
            if (!achou)
            {
                cheater = true;
                break;
            }
        }
        if (cheater)
        {
            cout << "CHEATER\n";
            continue;
        }
        else
        {
            sort(dieta.begin(), dieta.end());
            for (char c : dieta)
                cout << c;
            cout << endl;
        }
    }
    return 0;
}
