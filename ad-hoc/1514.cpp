#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        cin.ignore();
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int c = 0;
        bool r1 = false, r2 = true, r3 = false, r4 = true;

        // Rule 1: Nobody solved all the problems
        for (int i = 0; i < n; i++) {
            bool allSolved = true;
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    allSolved = false;
                    break;
                }
            }
            if (allSolved) {
                r1 = true;
                break;
            }
        }
        if (!r1) c++;

        // Rule 2: Every problem was solved by at least one person
        for (int j = 0; j < m; j++) {
            bool solvedBySomeone = false;
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] == 1) {
                    solvedBySomeone = true;
                    break;
                }
            }
            if (!solvedBySomeone) {
                r2 = false;
                break;
            }
        }
        if (r2) c++;

        // Rule 3: There is no problem solved by everyone
        for (int j = 0; j < m; j++) {
            bool solvedByEveryone = true;
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] == 0) {
                    solvedByEveryone = false;
                    break;
                }
            }
            if (solvedByEveryone) {
                r3 = true;
                break;
            }
        }
        if (!r3) c++;

        // Rule 4: Everyone solved at least one problem
        for (int i = 0; i < n; i++) {
            bool solvedAtLeastOne = false;
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1) {
                    solvedAtLeastOne = true;
                    break;
                }
            }
            if (!solvedAtLeastOne) {
                r4 = false;
                break;
            }
        }
        if (r4) c++;

        cout << c << endl;
    }

    return 0;
}

    /**
    1 1 0
    0 1 0
    0 0 0
    */

    /// rows == persons
    /// columns == problems
