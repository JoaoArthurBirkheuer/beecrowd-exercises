#include <iostream>

using namespace std;

int main() {

    int x;
    cin>>x;
    while(x--)
    {
        int avenida, distRadar,i=0;
        cin>>avenida>>distRadar;
        int auxRadar = distRadar;
        for(i=1;distRadar<avenida;distRadar+=auxRadar,i++) i = i;
        if(avenida>distRadar) i++;
        cout<<i<<endl;
    }
    return 0;
}
