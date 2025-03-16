#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    bool first = true;
    while (getline(cin, s)) {
        map<int, int> freq;
        if(!first) cout<<endl;
        first = false;
        for (char c : s) {
            freq[(int)c]++;
        }

        vector<pair<int, int>> sortedFreq(freq.begin(), freq.end());

        sort(sortedFreq.begin(), sortedFreq.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        });

        for (const auto& [key, element] : sortedFreq) {
            cout << key << " " << element << endl;
        }
    }

    return 0;
}
