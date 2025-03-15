#include <iostream>

using namespace std;

int main() {

    int index,anterior = 2, atual = 3,num = 0;
    cin>>index;
    for(int i=4,cont=0;cont<index;i++)
    {
        if(atual+anterior==i)
        {
            int aux = anterior;
            anterior = atual;
            atual = atual + aux;
        }
        else
        {
         num = i;
         cont++;
        }
    }
    cout<<num<<endl;
    return 0;
}
