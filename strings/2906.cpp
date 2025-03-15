#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string simplifyEmail(const string& email) {
    string simplified = "";
    bool ignore = false;
    for (char c : email) {
        if (c == '@') {
            simplified += email.substr(email.find('@'));
            break;
        } else if (c == '.') {
            continue;
        } else if (c == '+') {
            ignore = true;
        }
        if (!ignore) {
            simplified += c;
        }
    }
    return simplified;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    unordered_set<string> uniqueUsers;

    for (int i = 0; i < N; ++i) {
        string email;
        getline(cin, email);
        string simplifiedEmail = simplifyEmail(email);
        uniqueUsers.insert(simplifiedEmail);
    }

    cout << uniqueUsers.size() << endl;

    return 0;
}
