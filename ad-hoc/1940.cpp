#include <iostream>
using namespace std;
int main() {

    int j,r, highestScore = -1, ultimoComHS = 1;
    cin>>j>>r;
    int scores[j];

    for(int i=0;i<j;i++) scores[i] = 0;

    for(int i=0;i<r;i++)
    {
        for(int ii=0;ii<j;ii++)
        {
            int valor;
            cin>>valor;
            scores[ii] += valor;
        }
    }

    for(int i=0;i<j;i++)
        if(scores[i]>highestScore)
            highestScore = scores[i];

    for(int i=0;i<j;i++)
        if(scores[i]==highestScore)
            ultimoComHS = i+1;

    cout<<ultimoComHS<<endl;

    return 0;
}
