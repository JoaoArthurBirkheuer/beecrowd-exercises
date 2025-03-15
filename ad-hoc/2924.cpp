#include <iostream>
#include <string>

using namespace std;

string addLargeIntegers(const string& a, const string& b) {
    string result;

    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += (a[i--] - '0');
        if (j >= 0) sum += (b[j--] - '0');

        result.insert(0, 1, '0' + sum % 10);
        carry = sum / 10;
    }

    return result;
}

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string c = addLargeIntegers(a, b);

    if (c.length() > 512 || (c.length() == 512 && c > "2" + string(511, '0'))) {
        cout << "Sum exceeds the limit." << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}
