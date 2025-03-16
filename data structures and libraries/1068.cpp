#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    stack<char> parentesis;
    bool incorreto = false;
    string ss;
    while(getline(cin,ss)){
        for(char c:ss)
        {
            if(c == '(')
                parentesis.push(c);
            else if(c == ')')
            {
                if(!parentesis.empty() && parentesis.top() == '(')
                    parentesis.pop();
                else incorreto = true;
            }
        }
        if(!incorreto && parentesis.empty()) cout<<"correct\n";
        else cout<<"incorrect\n";
        while(!parentesis.empty()) parentesis.pop();
        incorreto = false;
    }
    return 0;
}
