#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    char sequencia[26];
    string s, ss, sss = "";
    getline(cin,s);
    for(int i=0;i<26;i++) sequencia[i] = s[i];
    getline(cin,ss);
    for(char c:ss)
    {
        int p = c - 'a';
        sss += sequencia[p];
    }
    cout<<sss<<endl;
    return 0;
}
