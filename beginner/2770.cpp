#include <iostream>

using namespace std;

int main() {

    int x,y,r;
    while(cin>>x>>y>>r)
    {
        while(r--)
        {
            int x1,y1;
            cin>>x1>>y1;
            if((x1<=x&&y1<=y)||(x1<=y&&y1<=x)) cout<<"Sim\n";
            else cout<<"Nao\n";
        }
    }

    return 0;
}
