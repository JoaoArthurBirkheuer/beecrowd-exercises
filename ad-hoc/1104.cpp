#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {

    int a,b;
    while(cin>>a>>b)
    {
        if(a == 0 and b == 0) break;
        int valor;
        set<int> cartasA, cartasB;
        while(a--)
        {
            cin>>valor;
            cartasA.insert(valor);
        }
        while(b--)
        {
            cin>>valor;
            cartasB.insert(valor);
        }
        /*if(cartasA.size() > cartasB.size())
        {
            for(auto it = cartasA.begin(); it != cartasA.end(); it++)
                if(find(cartasB.begin(),cartasB.end(),*it) != cartasB.end())
                    cartasB.erase((*it));
            cout<<cartasB.size()<<endl;
        }
        else
        {
            for(auto it = cartasB.begin(); it != cartasB.end(); it++)
                if(find(cartasA.begin(),cartasA.end(),*it) != cartasA.end())
                    cartasA.erase((*it));
            cout<<cartasA.size()<<endl;
        }*/
        ///esse acima tomou TLE
        set<int> aliceGives, bettyGives;

        set_difference(cartasA.begin(), cartasA.end(), cartasB.begin(), cartasB.end(), inserter(aliceGives, aliceGives.end()));
        set_difference(cartasB.begin(), cartasB.end(), cartasA.begin(), cartasA.end(), inserter(bettyGives, bettyGives.end()));
        cout << min(aliceGives.size(), bettyGives.size()) << endl;
    }

    return 0;
}
