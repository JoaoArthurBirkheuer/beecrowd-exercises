#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second != p2.second) return p1.second > p2.second;
    return p1.first < p2.first;
}

int main() {
    int t;
    cin >> t;
    vector<pair<string, int>> gnomes(t);

    for (int i = 0; i < t; i++) {
        cin >> gnomes[i].first >> gnomes[i].second;
    }

    stable_sort(gnomes.begin(), gnomes.end(), cmp);

    int numTeams = t / 3;

    for (int i = 0; i < numTeams; i++) {
        cout << "Time " << (i + 1) << endl;
        cout << gnomes[i].first << " " << gnomes[i].second << endl;
        cout << gnomes[i + numTeams].first << " " << gnomes[i + numTeams].second << endl;
        cout << gnomes[i + 2 * numTeams].first << " " << gnomes[i + 2 * numTeams].second << endl;

        cout << endl;
    }
    return 0;
}
