#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int c = 0;
        float f;
        cin>>f;
        //erro no enunciado pelo jeito
        //nao colocar >= 1.0
        while(f>1.0)
        {
            f /= 2.0;
            c++;
        }
        cout<<c<<" dias\n";
    }
    return 0;
}
