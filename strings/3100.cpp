#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;  // Using cin instead of getline(cin, S) to avoid trailing spaces

    string invariant;
    int count5 = 0;

    // Extract invariant sequence (excluding '5') and count '5's
    for (char c : S) {
        if (c == '5')
            count5++;
        else
            invariant.push_back(c);
    }

    // Find the first '7' to determine the best insertion point for '5's
    size_t pos = invariant.find('7');

    // If there's no '7', insert all '5's at the end
    if (pos == string::npos)
        pos = invariant.size();

    // Construct the smallest valid number
    cout << invariant.substr(0, pos)   // All '3's before the first '7'
         << string(count5, '5')        // Insert all '5's
         << invariant.substr(pos)      // Append the rest of the 'invariant' (includes '7's)
         << "\n";

    return 0;
}
