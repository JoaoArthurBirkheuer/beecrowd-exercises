#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> stack; 
    vector<int> min_stack; 
    
    for (int i = 0; i < N; i++) {
        string operation;
        cin >> operation;
        
        if (operation == "PUSH") {
            int value;
            cin >> value;
            stack.push_back(value);
            if (min_stack.empty() || value <= min_stack.back()) {
                min_stack.push_back(value);
            }
        }
        else if (operation == "POP") {
            if (stack.empty()) {
                cout << "EMPTY" << endl;
            } else {
                if (stack.back() == min_stack.back()) {
                    min_stack.pop_back();
                }
                stack.pop_back();
            }
        }
        else if (operation == "MIN") {
            if (stack.empty()) {
                cout << "EMPTY" << endl;
            } else {
                cout << min_stack.back() << endl;
            }
        }
    }
    
    return 0;
}