#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    string letras[26] = {
        "2", "22", "222", "3", "33", "333", "4", "44", "444",
        "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777",
        "8", "88", "888", "9", "99", "999", "9999"};

    while (t--) {
        string s, output = "";
        char charAnt = '\0';
        getline(cin, s);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (charAnt == '0') {
                    output += '*';
                }
                output += '0';
                charAnt = '0';
            }
            else if (s[i] == '1') {
                if (charAnt == '1') {
                    output += '*';
                }
                output += '1';
                charAnt = '1';
            }
            else if (islower(s[i])) {
                if (charAnt == letras[s[i] - 'a'][0]) {
                    output += '*';
                }
                output += letras[s[i] - 'a'];
                charAnt = letras[s[i] - 'a'][0];
            }
            else if (isupper(s[i])) {
                output += '#';
                output += letras[tolower(s[i]) - 'a'];
                charAnt = letras[tolower(s[i]) - 'a'][0];
            }
        }

        cout << output << endl;
    }

    return 0;
}
