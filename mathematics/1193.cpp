#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decimalParaBinario(int str);
string decimalParaHexa(int in);
int hexaParaDecimal(string hexa);
int binarioParaDecimal(string bin);

int main() {

    int t, aux = 1;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string coiso, auxNum = "", unidade = "";
        bool mudar = false;
        getline(cin,coiso);
        for(char c:coiso)
        {
            if(c == ' ') mudar = true;
            else if(!mudar) auxNum += c;
            else unidade += c;
        }
        if(unidade == "dec")
        {
          cout<<"Case "<<aux<<":\n";
          cout<<decimalParaHexa(stoi(auxNum))<<" hex"<<endl;
          cout<<decimalParaBinario(stoi(auxNum))<<" bin"<<endl<<endl;
        }
        else if(unidade == "bin")
        {
            cout<<"Case "<<aux<<":\n";
            cout<<binarioParaDecimal(auxNum)<<" dec"<<endl;
            int d = binarioParaDecimal(auxNum);
            cout<<decimalParaHexa(d)<<" hex"<<endl<<endl;
        }
        else
        {
            cout<<"Case "<<aux<<":\n";
            cout<<hexaParaDecimal(auxNum)<<" dec"<<endl;
            cout<<decimalParaBinario(hexaParaDecimal(auxNum))
            <<" bin"<<endl<<endl;
        }
        aux++;
    }

    return 0;
}

string decimalParaBinario(int in)
{
    string bin = "";
    while(in != 0)
    {
       char bit = (in%2 == 0)?('0'):('1');
       bin += bit;
       in/=2;
    }
    string bin2 = bin;
    for(int i=0;i<bin.length();i++)
       bin[i] = bin2[bin2.length()-i-1];
    return bin;
}

string decimalParaHexa(int in)
{
    if (in == 0) return "0";
    string hexa = "";
    while(in != 0)
    {
        int d = in % 16;
        char c;
        if(d < 10)
            c = '0' + d;
        else
            c = 'a' + (d - 10);

        hexa += c;
        in /= 16;
    }

    string hexa2 = hexa;
    for(int i = 0; i < hexa.length(); i++)
        hexa[i] = hexa2[hexa2.length() - i - 1];
    return hexa;
}

int binarioParaDecimal(string bin)
{
    int p = bin.size()-1, inteiro = 0;
    for(char c:bin)
    {
        if(c == '1') inteiro += round(pow(2,p));
        p--;
    }
    return inteiro;
}

int hexaParaDecimal(string hexa)
{
    int p = hexa.size()-1, inteiro = 0;
    for(char c:hexa)
    {
        if(!isalpha(c)) inteiro += round(pow(16,p)*(c-'0'));
        else
        {
            if(c == 'a') inteiro += round(pow(16,p)*10);
            else if(c == 'b') inteiro += round(pow(16,p)*11);
            else if(c == 'c') inteiro += round(pow(16,p)*12);
            else if(c == 'd') inteiro += round(pow(16,p)*13);
            else if(c == 'e') inteiro += round(pow(16,p)*14);
            else if(c == 'f') inteiro += round(pow(16,p)*15);
        }
        p--;
    }
    return inteiro;
}
