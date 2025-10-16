#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {

    cout<<fixed; 
    char somaOuMedia;
    float soma = 0.0;
    float linha, mat[12][12];
    cin>>linha>>somaOuMedia;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
           cin>>mat[i][j];
           if(i==linha)
           soma+=mat[i][j];
        }
    }
    if(somaOuMedia=='M') soma/=12.0;
    cout<<setprecision(1)<<soma<<endl;
    return 0;
}