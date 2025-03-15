#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        int v9[9], v8[8], v7[7], v6[6], v5[5], v4[4], v3[3], v2[2], ultimoElem;
        cin >> ultimoElem;

        for (int i = 0; i < 3; i++) {
            if (i % 2 == 0) cin >> v3[i];
            else v3[i] = 0;
        }
        for (int i = 0; i < 5; i++) {
            if (i % 2 == 0) cin >> v5[i];
            else v5[i] = 0;
        }
        for (int i = 0; i < 7; i++) {
            if (i % 2 == 0) cin >> v7[i];
            else v7[i] = 0;
        }
        for (int i = 0; i < 9; i++) {
            if (i % 2 == 0) cin >> v9[i];
            else v9[i] = 0;
        }

        for (int i = 1; i < 9; i += 2) {
                z = v7[i - 1] - v9[i - 1] - v9[i + 1];
                z /= 2;
                v9[i] = z;
        }

        for (int i = 0; i < 8; i++) v8[i] = v9[i] + v9[i+1];
        for (int i = 0; i < 7; i++) v7[i] = v8[i] + v8[i+1];
        for (int i = 0; i < 6; i++) v6[i] = v7[i] + v7[i+1];
        for (int i = 0; i < 5; i++) v5[i] = v6[i] + v6[i+1];
        for (int i = 0; i < 4; i++) v4[i] = v5[i] + v5[i+1];
        for (int i = 0; i < 3; i++) v3[i] = v4[i] + v4[i+1];
        for (int i = 0; i < 2; i++) v2[i] = v3[i] + v3[i+1];

        ultimoElem = v2[0] + v2[1];

        cout << ultimoElem << endl;
        for (int i = 0; i < 2; i++)
            (i == 1) ? (cout << v2[i] << endl) : (cout << v2[i] << " ");
        for (int i = 0; i < 3; i++)
            (i == 2) ? (cout << v3[i] << endl) : (cout << v3[i] << " ");
        for (int i = 0; i < 4; i++)
            (i == 3) ? (cout << v4[i] << endl) : (cout << v4[i] << " ");
        for (int i = 0; i < 5; i++)
            (i == 4) ? (cout << v5[i] << endl) : (cout << v5[i] << " ");
        for (int i = 0; i < 6; i++)
            (i == 5) ? (cout << v6[i] << endl) : (cout << v6[i] << " ");
        for (int i = 0; i < 7; i++)
            (i == 6) ? (cout << v7[i] << endl) : (cout << v7[i] << " ");
        for (int i = 0; i < 8; i++)
            (i == 7) ? (cout << v8[i] << endl) : (cout << v8[i] << " ");
        for (int i = 0; i < 9; i++)
            (i == 8) ? (cout << v9[i] << endl) : (cout << v9[i] << " ");
    }

    return 0;
}
