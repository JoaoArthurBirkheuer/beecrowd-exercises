#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int x=0;
    while(cin>>x)
    {
        cin.ignore();
        for(int inputs = 0;inputs<x;inputs++)
        {
            string str = "",str1 = "", str2 = "", aux = "";
            getline(cin,str);
            str1 = str.substr(0,str.length()/2);
            str2 = str.substr(str.length()/2,str.length()-1);
            aux = str1;
            for(int i=0;i<str1.length();i++)
                str1[i] = aux[str1.length()-i-1];
            aux = str2;
            for(int i=0;i<str2.length();i++)
                str2[i] = aux[str1.length()-i-1];
            str = str1+str2;
            cout<<str<<endl;
        }
    }
    return 0;
}
