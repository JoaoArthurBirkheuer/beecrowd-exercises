#include <iostream>
#include <iomanip>
using namespace std;
int contEspacos(string s);
int main() {

    cout<<fixed;
    int t;
    double valor, mediaValor = 0, mediaQuilo = 0;
    string s;
    cin>>t;
    cin.ignore();
    int quilos[t] = {0};
    for(int i=0;i<t;i++)
    {
       cin>>valor;
       cin.ignore();
       mediaValor += valor;
       getline(cin,s);
       quilos[i] = contEspacos(s);
       mediaQuilo += quilos[i];
    }
    for(int i=1;i<=t;i++)
        cout<<"day "<<i<<": "<<quilos[i-1]<<" kg\n";
    cout<<setprecision(2)<<mediaQuilo/(double)t<<" kg by day\n";
    cout<<setprecision(2)<<"R$ "<<mediaValor/(double)t<<" by day\n";
    return 0;
}

int contEspacos(string s)
{
    int c = 1;
    for(char ci:s) if(ci == ' ') c++;
    return c;
}
