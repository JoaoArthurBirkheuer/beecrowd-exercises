#include <iostream>
#include <map>
using namespace std;

int main() {

    map<char, double> notes;
    notes['W'] = 1;
    notes['H'] = 0.5;
    notes['Q'] = 0.25;
    notes['E'] = 0.125;
    notes['S'] = 0.0625;
    notes['T'] = 0.03125;
    notes['X'] = 0.015625;
    string composition = "";
    while(getline(cin,composition) && composition != "*")
    {
        int cont = 0;
        double soma = 0.0;
        for(char ch:composition)
        {
            if(ch == '/')
            {
                if(soma == 1) cont++;
                soma = 0;
            }
            else soma += notes[ch];
        }
        cout<<cont<<endl;
    }
    return 0;
}
