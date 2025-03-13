#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout<<fixed;
    string str = "";
    cin>>str;
    double media = 0.00, cont = 0.00;
    for(int i=0;i<str.length();)
    {
       if(str[i] == '1' && i < str.length()-1 && str[i+1] == '0')
       {
          media += 10;
          i+=2;
       }
       else
       {
           media += str[i] - '0';
           i++;
       }
       cont++;
    }
    cout<<setprecision(2)<<media/cont<<endl;
    return 0;
}
