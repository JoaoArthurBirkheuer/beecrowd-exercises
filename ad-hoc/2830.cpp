#include <iostream>

using namespace std;

int main() {

    int x,y;
    cin>>x>>y;
    if(x>y) swap(x,y);
    if(x<9&&y>=9) cout<<"final\n";
    else
    {
        if((x<=4&&y>=5) || (x<=12&&y>=13)) cout<<"semifinal\n";
        else if( (x<=2&&y>=3) || (x<=6&&y>=7) || (x<=10&&y>=11) || (x<=14&&y>=15) ) cout<<"quartas\n";
        else cout<<"oitavas\n";
    }

    return 0;
}
