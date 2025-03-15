#include <iostream>
using namespace std;
int main(void)
{
    int x = 0, y = 0;
    while(cin>>x>>y)
    {
        int xi = 0, yi = 0;
        cin>>xi>>yi;
        if(xi<1||yi<1||x<1||y<1||xi>8||x>8||y>8||yi>8) break;
        else if(x==xi&&y==yi)cout<<0<<endl;
        else if(x==xi||y==yi) cout<<1<<endl;
        else if(xi-x==y-yi) cout<<1<<endl;
        else if(xi-x==yi-y) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
