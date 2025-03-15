#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<string> nomes(N);

    for (int i = 0; i < N; ++i) getline(cin, nomes[i]);

    stable_sort(nomes.begin(), nomes.end(), [](const string& a, const string& b) {
        return a[0] < b[0];
    });

    for (const string& nome : nomes) cout << nome << endl;

    return 0;
}
