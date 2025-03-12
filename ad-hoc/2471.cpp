#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int m[t][t];

    for(int i = 0; i < t; i++)
        for(int j = 0; j < t; j++)
            cin >> m[i][j];

    int vetLinhas[t], vetColunas[t];

    for(int i = 0; i < t; i++) {
        int sum = 0;
        for(int j = 0; j < t; j++)
            sum += m[i][j];
        vetLinhas[i] = sum;
    }

    for(int j = 0; j < t; j++) {
        int sum = 0;
        for(int i = 0; i < t; i++)
            sum += m[i][j];
        vetColunas[j] = sum;
    }

    int M = 0;
    for(int i = 0; i < t; i++) {
        if(vetLinhas[i] == vetColunas[i]) {
            M = vetLinhas[i];
            break;
        }
    }

    int indexX = -1, indexY = -1;
    for(int i = 0; i < t; i++) {
        if(vetLinhas[i] != M) {
            indexX = i;
            break;
        }
    }
    for(int j = 0; j < t; j++) {
        if(vetColunas[j] != M) {
            indexY = j;
            break;
        }
    }

    int original = m[indexX][indexY] - (vetLinhas[indexX] - M);
    int alterado = m[indexX][indexY];

    cout << original << " " << alterado << endl;

    return 0;
}
