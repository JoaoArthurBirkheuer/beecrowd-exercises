#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int i = left;
    int j = mid;
    int k = 0;
    vector<int> temp(right - left + 1);
    int inv_count = 0;

    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }

    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }

    return inv_count;
}

int countInversions(vector<int>& arr, int left, int right) {
    int inv_count = 0;
    if (right > left) {
        int mid = (right + left) / 2;

        inv_count += countInversions(arr, left, mid);
        inv_count += countInversions(arr, mid + 1, right);
        inv_count += mergeAndCount(arr, left, mid + 1, right);
    }
    return inv_count;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int inversions = countInversions(v, 0, n - 1);

        if (inversions % 2 == 0) {
            cout << "Carlos\n";
        } else {
            cout << "Marcelo\n";
        }
    }

    return 0;
}
