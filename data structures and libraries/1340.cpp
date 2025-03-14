#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        stack<int> stk;
        queue<int> que;
        priority_queue<int> pque;

        bool isStack = true, isQueue = true, isPQueue = true;

        for (int i = 0; i < n; i++) {
            int op, value;
            cin >> op;

            if (op == 1) {
                cin >> value;
                stk.push(value);
                que.push(value);
                pque.push(value);
            } else if (op == 2) {
                cin >> value;

                // Check stack
                if (stk.empty() || stk.top() != value) {
                    isStack = false;
                } else {
                    stk.pop();
                }

                // Check queue
                if (que.empty() || que.front() != value) {
                    isQueue = false;
                } else {
                    que.pop();
                }

                // Check priority queue
                if (pque.empty() || pque.top() != value) {
                    isPQueue = false;
                } else {
                    pque.pop();
                }
            }
        }

        if (isStack && !isQueue && !isPQueue) {
            cout << "stack\n";
        } else if (!isStack && isQueue && !isPQueue) {
            cout << "queue\n";
        } else if (!isStack && !isQueue && isPQueue) {
            cout << "priority queue\n";
        } else if (!isStack && !isQueue && !isPQueue) {
            cout << "impossible\n";
        } else {
            cout << "not sure\n";
        }
    }

    return 0;
}
