#include <iostream>
using namespace std;

int main() {

    string op = "";
    while(getline(cin,op))
    {
        int ops, aux = 0, cont = 0;
        cin>>ops;
        cin.ignore();
        for(int i=0;i<op.size();i++)
        {
            if(op[i] == 'R')
            {
               aux++;
               if(aux == ops || op[i+1] == 'W' && i+1 != op.size())
               {
                   aux = 0;
                   cont++;
               }
            }
            else
            {
                cont++;
                aux = 0;
            }
        }
        if(aux != 0) cont++;
        cout<<cont<<endl;
    }

    return 0;
}
