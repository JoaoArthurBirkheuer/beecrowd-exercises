#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {

    int t;
    bool primeira = true;
    cin>>t;
    while(t--)
    {
        int traducoes, casos;
        cin>>traducoes>>casos;
        cin.ignore();
        string literal, traducao, str;
        map<string, string> lt;
        for(int i=0;i<traducoes;i++)
        {
            getline(cin,literal);
            getline(cin,traducao);
            lt[literal] = traducao;
        }
        for (int i = 0; i < casos; i++)
        {
            getline(cin, str);
            stringstream ss(str);
            string palavra;
            bool primeiraPalavra = true;

            while (ss >> palavra)
            {
                if (!primeiraPalavra) cout << " ";
                primeiraPalavra = false;

                auto it = lt.find(palavra);
                if (it != lt.end())
                    cout << it->second;
                else
                    cout << palavra;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
