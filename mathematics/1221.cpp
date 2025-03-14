#include <iostream>
#include <cmath>
using namespace std;

unsigned long long pr(unsigned long long n)
{
    unsigned long long r = floor(sqrt(n));
    for(unsigned long long i = 2; i <= r; i++)
        if(n % i == 0) return false;
        return true;
}
int main() {

    unsigned long long t,p;
    cin>>t;
    while(t--){
        cin>>p;
        (pr(p) == 1)?(printf("Prime\n")):(printf("Not Prime\n"));
    }

    return 0;
}
