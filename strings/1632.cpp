#include <iostream>

using namespace std;

int main() {

    int x = 0,i=0;
    cin>>x;
    cin.ignore();
    string vet[x];
    while(i<x)
    {
      getline(cin,vet[i]);
      i++;
    }
    i=0;
    while(i<x)
    {
        int total = 1;
        for(int j=0;j<vet[i].length();j++)
        {
            if(vet[i][j]=='A'||vet[i][j]=='E'||vet[i][j]=='I'||vet[i][j]=='O'||vet[i][j]=='S'||vet[i][j]=='a'||vet[i][j]=='e'||vet[i][j]=='i'||vet[i][j]=='o'||vet[i][j]=='s')total*=3;
            else total*=2;
        }
        cout<<total<<endl;
        i++;
    }
    return 0;
}
