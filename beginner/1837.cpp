#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int q = a/b;
    int r = a%b;

    if (r < 0 && b > 0)
    {
        r += b;
        q--;
    }
    else if (r < 0 && b < 0)
    {
        r -= b;
        q++;
    }
    cout<<q<<" "<<r<<endl;
    return 0;
}
