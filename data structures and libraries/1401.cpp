#include <iostream>
#include <algorithm>
///pode usar set p/ strings com duplica��es
using namespace std;

int main() {

    string s;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        sort(s.begin(), s.end());
        do
            cout<<s<<endl; // Imprime a permuta��o atual
        while (next_permutation(s.begin(), s.end())); // pr�xima permuta��o
        cout<<endl;
    }
    return 0;
}
