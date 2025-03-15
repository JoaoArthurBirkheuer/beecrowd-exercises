#include <iostream>
using namespace std;
int main() {

    int x,y;
    while(cin>>x>>y)
    {
        int totalFastest = 0, totalSlowest = 0, cont = 0;
        while(true)
        {
            if(totalFastest <= totalSlowest - y && totalFastest != 0 && totalSlowest != 0)
                break;
            else
            {
                totalFastest += x;
                totalSlowest += y;
                cont++;
            }
        }
        cout<<cont<<endl;
    }

    return 0;
}
