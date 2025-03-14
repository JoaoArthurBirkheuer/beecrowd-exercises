#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int tt;
        bool ignorar = false;
        string base = "", str;
        cin>>tt;
        cin.ignore();
        while(tt--)
        {
            getline(cin,str);
            if(base.empty())
                base = str;
            else if(str != base && !ignorar)
            {
                base = "ingles";
                ignorar = true;
            }
        }
        cout<<base<<endl;
    }

    return 0;
}
