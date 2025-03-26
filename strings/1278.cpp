#include <bits/stdc++.h>
using namespace std;
#include <iostream>

string trim(const string &str) {
    string result;
    bool inSpace = false;

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
            inSpace = false;
        } else if (!inSpace) {
            result += ' ';
            inSpace = true;
        }
    }

    if (!result.empty() && result.front() == ' ') result.erase(result.begin());
    if (!result.empty() && result.back() == ' ') result.pop_back();

    return result;
}

int main()
{
    int n;
    bool first = true;
    // remove leading spaces in both directions of the string

    while(cin >> n){
        if(n == 0) break;
        if(!first) cout << endl;
        first = false;
        cin.ignore();
        int biggest = 1;
        vector<string> strings;
        while(n--){
            string str;
            getline(cin,str);
            str = trim(str);
            if(str.length() > biggest) biggest = str.length();
            strings.push_back(str);
        }

        for(string str : strings){
            for(int i=str.length();i<biggest;i++) cout << " ";
            cout << str << endl;
        }
    }

    return 0;
}
