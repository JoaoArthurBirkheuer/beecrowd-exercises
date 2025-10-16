#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int n, q, case_num = 1;
    while (cin >> n >> q) {
        if (n == 0 && q == 0) break;

        vector<int> marbles(n);
        for (int i = 0; i < n; ++i) {
            cin >> marbles[i];
        }
        
        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << case_num++ << ":" << endl;

        for (int i = 0; i < q; ++i) {
            int query_element;
            cin >> query_element;
            auto it = lower_bound(marbles.begin(), marbles.end(), query_element);
            
            if (it != marbles.end() && *it == query_element) {
                long long position = distance(marbles.begin(), it) + 1;
                cout << query_element << " found at " << position << endl;
            } else {
                cout << query_element << " not found" << endl;
            }
        }
    }
    return 0;
}
