#include <iostream>
#include <string>
using namespace std;
main()
{
    int x = 0, i = 0, cont = 0;
    cin>>x;
    cin.ignore();
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    bool achouLetra[26];
    for(int j=0; j<26; j++) achouLetra[j] = false;
    while(i<x)
    {
        string get = "";
        getline(cin,get);
        for(int j=0; j<get.length(); j++) get[j]=tolower(get[j]);
        for(int j=0; j<26; j++) for(int k=0; k<get.length(); k++) if(get[k]==alfabeto[j]) achouLetra[j] = true;
        for(int j=0; j<26; j++) if(achouLetra[j]==true) cont++;

        if(cont==26) cout<<"frase completa\n";
        else if(cont>=26/2) cout<<"frase quase completa\n";
        else cout<<"frase mal elaborada\n";
        i++;
        for(int j=0;j<26;j++) achouLetra[j] = false;
        cont = 0;
    }
    return 0;
}
