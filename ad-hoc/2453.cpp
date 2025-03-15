#include <iostream>

using namespace std;

int main() {

    string s="",aux="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
      if(i+1<s.length()&&s[i]=='p')
      {
        if(s[i+1]=='P'||s[i+1]=='p')
        {
            aux+=s[i+1];
            i++;
        }
        else aux+=s[i+1];
      }
      else if(isspace(s[i]))
      aux+=" ";
    }
    cout<<aux<<endl;
    return 0;
}
