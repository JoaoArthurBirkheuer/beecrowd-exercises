#include <iostream>
#include <string>
using namespace std;

int main() {

    string s, newS = "", aux = "";
    bool nw = true;
    int cS = 0, i = 0;
    getline(cin,s);
    for(char c:s)
        if(c == ' ') cS++;
    string vet[cS+1];
    for(char c:s)
    {
        if(c == ' ')
        {
            vet[i] = aux;
            aux = "";
            i++;
        }
        else aux += c;
    }
    vet[i] = aux;
    for(i = 0;i<cS+1;i++)
      if(vet[i].length()>=4 && vet[i][0] == vet[i][2] && vet[i][1] == vet[i][3])
        vet[i] = vet[i].substr(2);
    for(i = 0;i<cS + 1;i++)
        (i==cS)?(cout<<vet[i]<<endl):(cout<<vet[i]<<" ");
    return 0;
}
