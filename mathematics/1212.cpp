#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string num1, num2;
    
    while (cin >> num1 >> num2) {
        if (num1 == "0" && num2 == "0") break;
        int len1 = num1.length();
        int len2 = num2.length();
        if (len1 < len2) num1 = string(len2 - len1, '0') + num1;
        else if (len2 < len1) num2 = string(len1 - len2, '0') + num2;

        int carry = 0;
        int carryCount = 0;
        for (int i = num1.length() - 1; i >= 0; i--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[i] - '0';
            int sum = digit1 + digit2 + carry;
            if (sum >= 10) {
                carry = 1;
                carryCount++;
            } else {
                carry = 0;
            }
        }

        if (carryCount == 0)
            cout << "No carry operation." << endl;
        else if (carryCount == 1)
            cout << "1 carry operation." << endl;
        else
            cout << carryCount << " carry operations." << endl;
    }

    return 0;
}
