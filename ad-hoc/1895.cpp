#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int pa = 0, pb = 0;
    bool a = true;
    int n,t,l,s;
    cin>>n>>t>>l;
    n--;
    while(n--)
    {
        cin>>s;
        if(abs(t-s)<=l)
        {
            if(a) pa+=abs(t-s);
            else pb+=abs(t-s);
            t = s;
        }
        a = !a;
    }
    cout<<pa<<" "<<pb<<endl;
    return 0;
}
