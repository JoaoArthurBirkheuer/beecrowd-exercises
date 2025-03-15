#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s = "";
    while(getline(cin,s))
    {
        string resultado = "";
        bool asterisco = true, underscore = true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                if(asterisco) resultado += "<b>";
                else resultado += "</b>";
                asterisco = !asterisco;
            }
            else if(s[i]=='_')
            {
                if(underscore) resultado += "<i>";
                else resultado +="</i>";
                underscore = !underscore;
            }
            else
                resultado += s[i];
        }
        cout<<resultado<<endl;
    }
    return 0;
}
