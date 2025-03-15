#include <iostream>
#include <string>
using namespace std;

int main() {

    string codigo = "", bacteria = "";
    while(getline(cin,codigo)&&getline(cin,bacteria))
    {
       if(codigo.find(bacteria)!=string::npos) cout<<"Resistente\n";
       else cout<<"Nao resistente\n";
    }
    return 0;
}
