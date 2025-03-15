#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string rodarString (string str)
{
    string aux1 = "";
    if(str.length()<=1) aux1 = str;
    else if(str.length()==2)
    {
        aux1+= str[1];
        aux1+= str[0];
    }
    else if(str.length()==3)
    {
        aux1+=str[2];
        aux1+=str[0];
        aux1+=str[1];
    }
    else
    {
        aux1 += str[str.length()-1];
        aux1 += str.substr(0,str.length()-1);
    }
    return aux1;
}
string ordemMaior(string str)
{
    string aux = str;
    for(int i=0; i<str.length(); i++)
    {
        str = rodarString(str);
        if(aux<str) aux = str;
    }
    return aux;
}
string ordemMenor(string str)
{
    string aux = str;
    for(int i=0; i<str.length(); i++)
    {
        str = rodarString(str);
        if(aux>str) aux = str;
    }
    return aux;
}
int main()
{
    string s = "";
    int i=1;
    while(getline(cin,s))
    {
        if(s=="*")
            break;
        cout<<"Caso "<<i<<": "<<ordemMenor(s)<<" "<<ordemMaior(s)<<endl;
        i++;
    }
    return 0;
}
