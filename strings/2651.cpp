#include <iostream>
#include <string>
using namespace std;

int main() {

    string link;
    getline(cin,link);
    for(int i=0;i<link.length();i++) link[i] = tolower(link[i]);
    size_t found = link.find("zelda");
    if(found!=string::npos) cout<<"Link Bolado\n";
    else cout<<"Link Tranquilo\n";
    return 0;
}
