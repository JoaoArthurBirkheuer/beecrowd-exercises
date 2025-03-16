#include <iostream>
#include <iomanip>
#include <queue>
#include <string>
using namespace std;
int main() {

    cout<<fixed;
    string s, aux = "";
    int p;
    float liters, quant;
    cin>>p>>liters>>quant;
    cin.ignore();
    queue<string> fila;
    getline(cin,s);
    for(char ss: s)
    {
        if(ss == ' ')
        {
            fila.push(aux);
            aux = "";
        }
        else aux += ss;
    }
    if(!aux.empty()) fila.push(aux);
    while(liters > quant)
    {
        liters -= quant;
        fila.push(fila.front());
        fila.pop();
    }
    cout<<fila.front()<<" "<<setprecision(1)<<liters<<endl;

    return 0;
}
