#include <iostream>
using namespace std;

string decimalParaBase32(unsigned long long in)
{
    if (in == 0) return "0";
    string b32 = "";
    while(in != 0)
    {
        unsigned long long d = in % 32;
        char c;
        if(d < 10)
            c = '0' + d;
        else
            c = 'A' + (d - 10);

        b32 += c;
        in /= 32;
    }

    string b32_2 = b32;
    for(unsigned long long i = 0; i < b32.length(); i++)
        b32[i] = b32_2[b32_2.length() - i - 1];
    return b32;
}
int main() {

    unsigned long long t;
    while(cin>>t)
    {
        cout<<decimalParaBase32(t)<<endl;
        if(t == 0) break;
    }

    return 0;
}
