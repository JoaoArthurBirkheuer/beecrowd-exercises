#include <iostream>
#include <string>
using namespace std;

int main() {

    string p1 = "", p2 = "";
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,p1);
        getline(cin,p2);
        int cont = 0;
        string nome = "";
        bool parte1 = true;
        for(int i=0,j=0;i<p1.length() || j<p2.length();)
        {
            if(parte1)
            {
              nome += p1[i];
              i++;
              if(i%2 == 0 || i == p1.length()) parte1 = !parte1;
            }
            else
            {
               nome += p2[j];
               j++;
               if(j%2 == 0 || j == p2.length()) parte1 = !parte1;
            }
        }
        cout<<nome<<endl;
    }

    return 0;
}
