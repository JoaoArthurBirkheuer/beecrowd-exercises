#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, m;
    map<string, string> dict;
    cin >> n;
    cin.ignore();
        while (n--) {
        string lingua, trad;
        getline(cin, lingua);
        getline(cin, trad);
        dict[lingua] = trad;
    }

    cin >> m;
    cin.ignore();
    while (m--) {
        string pessoa, lingua;
        getline(cin, pessoa);
        getline(cin, lingua);
        cout << pessoa << endl;
        cout << dict[lingua] << endl;
        cout << endl;
    }

    return 0;
}
