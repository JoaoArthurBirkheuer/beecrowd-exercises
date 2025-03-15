#include <iostream>
#include <string>
using namespace std;
int main() {

    string test = "";
    while(getline(cin,test))
    {
        int h1 = 0, h2 = 0, h3 = 0, h4 = 0, cont = 0;
        for(int i=0;i<test.length();i++)
        {
            test[i] = toupper(test[i]);
            if(test[i] == '-' && cont == 0)
            {
                h1 = i;
                cont++;
            }
            else if(test[i] == '-' && cont == 1)
            {
                h2 = i;
                cont++;
            }
            else if(test[i] == '-' && cont == 2)
            {
                h3 = i;
                cont++;
            }
            else if(test[i] == '-' && cont == 3)
            {
                h4 = i;
                cont++;
            }
        }
        if((test[0] == 'C' || test[h1-1] == 'C') &&
        (test[h1+1] == 'O' || test[h2-1] == 'O') &&
        (test[h2+1] == 'B' || test[h3-1] == 'B') &&
        (test[h3+1] == 'O' || test[h4-1] == 'O') &&
        (test[h4+1] == 'L' || test[test.length() -1] == 'L')) cout<<"GRACE HOPPER\n";
        else cout<<"BUG\n";
    }

    return 0;
}
