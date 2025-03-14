#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool prime(unsigned long long usl)
{
    if(usl<2) return false;
    unsigned long long raiz = floor(sqrt(usl));
    for(unsigned long long i = 2; i <= raiz; i++)
        if(usl % i == 0) return false;
    return true;
}

bool superPrime(unsigned long long usl)
{
    string n = to_string(usl);
    for(char c:n){
        int digit = c - '0';
        if(digit != 2 && digit != 3 && digit != 5 && digit != 7)
            return false;
    }
    return true;
}

int main() {

    unsigned long long t;
    while(cin>>t)
    {
        if(prime(t))
        {
            if(superPrime(t)) cout<<"Super\n";
            else cout<<"Primo\n";
        }
        else cout<<"Nada\n";
    }

    return 0;
}
