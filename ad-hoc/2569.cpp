#include <iostream>
#include <string>
using namespace std;

int main() {
 
    int a,b;
    char op;
    cin>>a>>op>>b;
    string op1 = to_string(a), op2 = to_string(b);
    
    for(int i=0;i<op1.length();i++)
        if(op1[i] == '7') op1[i] = '0';
    for(int i=0;i<op2.length();i++)
        if(op2[i] == '7') op2[i] = '0';
        
    a = stoi(op1);
    b = stoi(op2);
    
    int result = 0;
    if(op == '+') result = a + b;
    else if(op == '-') result = a - b;
    else if(op == 'x') result = a * b;
    else result = a / b;
    
    string res = to_string(result);
    
    for(int i=0;i<res.length();i++)
        if(res[i] == '7') res[i] = '0';
        
    result = stoi(res);
    cout<<result<<endl;
    return 0;
}