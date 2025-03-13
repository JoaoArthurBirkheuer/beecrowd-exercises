#include <iostream>
#include <string>
using namespace std;

int main() {

    unsigned long long fat[16] = {1};
    for (int i = 1; i <= 15; i++) fat[i] = fat[i - 1] * i;
    string str = "";
    while(cin>>str &&  str != "0")
        cout<<fat[str.length()]<<endl;

    return 0;
}
