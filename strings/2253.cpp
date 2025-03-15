#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {

    string s = "";
    while(getline(cin,s))
    {
        if(s.length()<6||s.length()>32)
        cout<<"Senha invalida."<<endl;
        else
        {
            bool pontuacao = false, maiuscula = false, minuscula = false, numero = false;
            for(int i=0;i<s.length();i++)
            {
                if(isdigit(s[i])) numero = true;
                else if(isupper(s[i])) maiuscula = true;
                else if(islower(s[i])) minuscula = true;
                else if(!isalpha(s[i])) pontuacao = true;
            }
            if(!pontuacao&&maiuscula&&minuscula&&numero)
            cout<<"Senha valida."<<endl;
            else
            cout<<"Senha invalida."<<endl;
        }
    }
    return 0;
}
