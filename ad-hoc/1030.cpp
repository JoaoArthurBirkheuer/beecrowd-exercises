#include <iostream>
#include <vector>
using namespace std;

int josephus(int n, int k) {

    int last_position = 0;

    for (int i = 2; i <= n; i++) {
        last_position = (last_position + k) % i;
    }

    return last_position + 1;
}

int main() {
    int NC;
    cin >> NC;

    for (int case_num = 1; case_num <= NC; case_num++) {
        int n, k;
        cin >> n >> k;

        int result = josephus(n, k);
        cout << "Case " << case_num << ": " << result << endl;
    }

    return 0;
}
