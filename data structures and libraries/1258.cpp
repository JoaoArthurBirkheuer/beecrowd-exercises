#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


int sizeValue(char size) {
    if (size == 'P') return 3;
    if (size == 'M') return 2;
    if (size == 'G') return 1;
    return 0;
}

bool compareShirts(const string& s1, const string& s2) {
    istringstream iss1(s1), iss2(s2);
    string color1, color2, name1, name2;
    char size1, size2;

    iss1 >> color1 >> size1;
    getline(iss1, name1);
    iss2 >> color2 >> size2;
    getline(iss2, name2);

    if (!name1.empty() && name1[0] == ' ') name1.erase(name1.begin());
    if (!name2.empty() && name2[0] == ' ') name2.erase(name2.begin());

    if (color1 != color2) {
        return color1 < color2;
    }

    if (sizeValue(size1) != sizeValue(size2)) {
        return sizeValue(size1) > sizeValue(size2);
    }

    return name1 < name2;
}

int main() {
    int t, ct = 0;
    string n, c, aux;
    while (cin >> t) {
        if(t == 0) break;
        else if(ct > 0) cout<<endl;
        cin.ignore();
        vector<string> camisasBrancas;
        vector<string> camisasVermelhas;

        while (t--) {
            getline(cin, n);
            getline(cin, c);
            aux = c + " " + n;

            if (c.substr(0, 6) == "branco") {
                camisasBrancas.push_back(aux);
            } else if (c.substr(0, 8) == "vermelho") {
                camisasVermelhas.push_back(aux);
            }
        }

        stable_sort(camisasBrancas.begin(), camisasBrancas.end(), compareShirts);
        stable_sort(camisasVermelhas.begin(), camisasVermelhas.end(), compareShirts);

        for (const string& s : camisasBrancas) cout << s << endl;
        for (const string& s : camisasVermelhas) cout << s << endl;
        ct++;
    }
    return 0;
}
