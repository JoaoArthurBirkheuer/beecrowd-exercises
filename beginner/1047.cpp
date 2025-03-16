#include <iostream>
using namespace std;

int main() {

    int h1,m1,h2,m2,rh = 0,rm = 0;
    cin>>h1>>m1>>h2>>m2;
    rh = (h2 > h1)?(h2 - h1):(24 - (h1 - h2));
    if(m2 < m1)
    {
        rh--;
        rm = 60 - (m1 - m2);
    }
    else rm = m2 - m1;
    if(rh == 24 && rm > 0) rh = 0;
    cout<<"O JOGO DUROU "<<rh<<" HORA(S) E "<<rm<<" MINUTO(S)\n";
    return 0;
}
