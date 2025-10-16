#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long long column_to_int(const vector<string>& matring, int col) {
    long long value = 0;
    
    value += (matring[0][col] - '0') * 1000;
    value += (matring[1][col] - '0') * 100;
    value += (matring[2][col] - '0') * 10;
    value += (matring[3][col] - '0') * 1;
    
    return value;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    vector<string> matring(4);
    string result = "";
    
    if (!(cin >> matring[0] >> matring[1] >> matring[2] >> matring[3])) {
        return 0; 
    }
    int total_length = matring[0].length();
    if (total_length < 2) {
        cout << "" << "\n";
        return 0;
    }

    int last_index = total_length - 1;
    long long F = column_to_int(matring, 0);
    long long L = column_to_int(matring, last_index);

    for(int i = 1; i < last_index; i++) {
        long long M = column_to_int(matring, i);
        long long encoded_val = (F * M + L) % 257;

        result += static_cast<char>(encoded_val);
    }
    
    cout << result << "\n";
    return 0;
}