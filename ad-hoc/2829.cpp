#include <bits/stdc++.h>
using namespace std;

bool ignoreCaseCompare(const string &str1, const string &str2) {
    string lower1 = str1, lower2 = str2;
    transform(lower1.begin(), lower1.end(), lower1.begin(), ::tolower);
    transform(lower2.begin(), lower2.end(), lower2.begin(), ::tolower);

    if (lower1 != lower2) return lower1 < lower2;
    return str1 < str2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    vector<string> vect;
    string s;

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        vect.push_back(s);
    }

    stable_sort(vect.begin(), vect.end(), ignoreCaseCompare);

    for (const auto &str : vect) {
        cout << str << '\n';
    }

    return 0;
}
