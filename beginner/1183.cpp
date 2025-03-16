#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout<<fixed<<setprecision(1);
    char o;
    cin>>o;
    double m[12][12] = {0}, soma = 0, cont = 0;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            cin>>m[i][j];
    int aux = 0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(j > aux)
            {
               cont++;
               soma += m[i][j];
            }
        }
        aux++;
    }
    if(o == 'S') cout<<soma<<endl;
    else cout<<soma/cont<<endl;

    return 0;
}
