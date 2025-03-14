#include <iostream>
#include <cmath>
using namespace std;
unsigned long long fat(int a)
{
    if(a == 0) return 1;
    int cont = 0;
    unsigned long long f = 1;
    while(cont != a)
    {
        ++cont;
        f *= cont;
    }
    return f;
}
int main() {

    int a,b;
    while(cin>>a>>b)
        cout<<fat(a)+fat(b)<<endl;
}
