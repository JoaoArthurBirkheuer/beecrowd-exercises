#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int num = 0;
        string s,aux = "";
        getline(cin,s);
        for(char c:s)
        {
            if(isdigit(c)) aux += c;
            else
            {
               if(aux.length()!=0) num += stoi(aux);
               aux = "";
            }
        }
        if(aux.length()!=0) num += stoi(aux);
        cout<<num<<endl;
    }

    return 0;
}
