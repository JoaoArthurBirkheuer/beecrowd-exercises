#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    string s,v[t],aux = "";
    getline(cin,s);
    for(int i=0,j=0;i<s.length();i++)
    {
        if(s[i] != ' ' && i != s.length()-1) aux += s[i];
        else
        {
            if(i == s.length()-1) aux += s[s.length()-1];
            v[j] = aux;
            j++;
            aux = "";
        }
    }
    for(int i=0;i<t;i++)
    {
        if(v[i].length()==3 &&
        (tolower(v[i][0]) == 'u' || tolower(v[i][0]) == 'o') &&
        (tolower(v[i][1]) == 'r' || tolower(v[i][1]) == 'b'))
        {
            v[i][2] = 'I';
        }
    }
    for(int i=0;i<t;i++) (i == t-1)?(cout<<v[i]<<endl):(cout<<v[i]<<" ");
    return 0;
}
