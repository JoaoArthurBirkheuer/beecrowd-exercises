#include <iostream>
#include <stack>
using namespace std;

int main() {

    string str;
    getline(cin,str);
    stack<char> assuntos;
    for(char ch:str)
    {
        if(ch == '(') assuntos.push('(');
        else if(ch == ')' && !assuntos.empty()) assuntos.pop();
    }
    (assuntos.empty() == 1)?(cout<<"Partiu RU!\n"):(cout<<"Ainda temos "<<assuntos.size()<<" assunto(s) pendente(s)!\n");

    return 0;
