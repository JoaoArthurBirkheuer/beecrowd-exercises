#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int alturaPulo, canos;
    cin>>alturaPulo>>canos;
    int vetor[canos];
    for(int i=0;i<canos;i++) cin>>vetor[i];
    bool puloImpossivel = false;
    for(int i=0;i<canos;i++)
    {
      if(i<canos-1)
      {
          if(abs(vetor[i]-vetor[i+1])>alturaPulo)
          {
              puloImpossivel = true;
              break;
          }
      }
    }
    if(!puloImpossivel) cout<<"YOU WIN\n";
    else cout<<"GAME OVER\n";

    return 0;
}
