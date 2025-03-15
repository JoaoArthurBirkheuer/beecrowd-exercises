#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int x = 0, i = 0, contLetras[26];
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>x;
    cin.ignore();
    string str = "";
    while(i<x)
    {
        int maior = 0;
        getline(cin,str);
        for(int k=0; k<26; k++) contLetras[k] = 0;
        for(int k=0; k<str.length(); k++)
        {
            if(isalpha(str[k]))
            {
                str[k] = tolower(str[k]);
                int posic = str[k] - 'a';
                contLetras[posic]++;
            }
        }
        for(int k=0; k<26; k++)
            if(maior<contLetras[k])
                maior = contLetras[k];
        for(int k=0; k<26; k++)
            if(contLetras[k]==maior)
                cout<<alfabeto[k];
        cout<<endl;
        i++;
    }
    return 0;
}
