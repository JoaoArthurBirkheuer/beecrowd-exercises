#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    cout<<fixed<<setprecision(1);
    bool achou = false;
    int cc = 0, cp = 0;
    char ch;
    string s,aux = "";
    cin>>ch;
    cin.ignore();
    getline(cin,s);
    for(char c:s)
    {
        if(c != ' ')
        {
            if(c == ch && !achou)
            {
                achou = true;
                cc++;
            }
            aux += c;
        }
        else
        {
            cp++;
            achou = false;
            aux = "";
        }
    }
    if(!aux.empty()) cp++;
    cout<<((float)cc*100.0)/(float)cp<<endl;

    return 0;
}
