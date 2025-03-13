#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mdcTres(int a, int b, int c) {
    return mdc(mdc(a, b), c);
}

int main() {

    int a,b,c;
    while(cin>>a>>b>>c)
    {
       vector<int> v;
       v.push_back(a);
       v.push_back(b);
       v.push_back(c);
       sort(v.begin(),v.end());
       if(v[2]*v[2] == v[1]*v[1] + v[0]*v[0] &&
          v[1]*v[1] == v[2]*v[2] - v[0]*v[0] &&
          v[0]*v[0] == v[2]*v[2] - v[1]*v[1])
        {
            if(mdcTres(v[2],v[1],v[0]) == 1)
                cout<<"tripla pitagorica primitiva\n";
            else
                cout<<"tripla pitagorica\n";
        }
        else cout<<"tripla\n";
    }

    return 0;
}
