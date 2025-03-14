#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(isalpha(str[i]))
            {
                int ascii = (int)str[i];
                ascii += 3;
                str[i] = (char)ascii;
            }
        }
        string aux = str;
        for(int i=0;i<str.length();i++)
            str[i] = aux[str.length()-i-1];
        for(int i = str.length()/2;i<str.length();i++)
        {
            int ascii = (int)str[i];
            ascii--;
            str[i] = (char)ascii;
        }
        cout<<str<<endl;
    }

    return 0;
}
