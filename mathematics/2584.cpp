#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout<<fixed;
    int t;
    cin>>t;
    while(t--)
    {
        double l;
        cin >> l;

        double apotema = l / (2 * tan(M_PI / 5));
        double perimetro = 5 * l;
        double area = (perimetro * apotema) / 2;
        cout<<setprecision(3)<<area<<endl;
    }
    return 0;
}
