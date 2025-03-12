#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    while (getline(cin, str)) {
        if (str.length() > 1 && str[0] == '0' && str[1] == 'x') {
            long long result = 0;
            int mult = 1;
            int pos = str.length() - 1;
            while (str[pos] != 'x') {
                if (isdigit(str[pos]))
                    result += (str[pos] - '0') * mult;
                else if (isalpha(str[pos]))
                    result += (tolower(str[pos]) - 'a' + 10) * mult;
                mult *= 16;
                pos--;
            }
            cout << result << endl;
        } else if (str[0] == '-') {
            break;
        } else {
            string result = "", resultInv = "0x";
            long long n = stoll(str);
            while (n > 15) {
                result += n % 16 <= 9 ? (char)('0' + n % 16) : (char)('A' + (n % 16 - 10));
                n /= 16;
            }
            result += n > 9 ? (char)('A' + (n - 10)) : (char)('0' + n);
            for (int i = result.length() - 1; i >= 0; i--)
                resultInv += result[i];
            cout << resultInv << endl;
        }
    }

    return 0;
}
