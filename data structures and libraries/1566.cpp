#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int findMax(int *arr, int n) {
    if (n <= 0) {
        return 0; 
    }
    int maxVal = *arr;
    
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
    return maxVal;
}

void countingSort(int *arr, int n) {
    if (n <= 1) {
        return; 
    }
    
    int k = findMax(arr, n);
    int *countArray = (int *)calloc(k + 1, sizeof(int));
    if (countArray == NULL) {
        cerr << "Erro de alocação de memória para countArray!\n";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        *(countArray + *(arr + i)) += 1;
    }

    for (int i = 1; i <= k; i++) {
        *(countArray + i) += *(countArray + i - 1);
    }
    
    int *outputArray = (int *)malloc(n * sizeof(int));
    if (outputArray == NULL) {
        cerr << "Erro de alocação de memória para outputArray!\n";
        free(countArray);
        return;
    }

    for (int i = n - 1; i >= 0; i--) {
        int value = *(arr + i);
        int position = *(countArray + value) - 1; 
        *(outputArray + position) = value;
        *(countArray + value) -= 1; 
    }

    for (int i = 0; i < n; i++) {
        *(arr + i) = *(outputArray + i);
    }

    free(countArray);
    free(outputArray);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    
    while(c--) {
        int q;
        cin >> q;
        if (q <= 0) continue;
        
        int *vetor_inteiros = (int *)malloc(q * sizeof(int));
        if (vetor_inteiros == NULL) {
            cerr << "Erro de alocação de memória para vetor_inteiros!\n";
            continue;
        }
        for (int i = 0; i < q; i++) {
            cin >> *(vetor_inteiros + i);
        }
        countingSort(vetor_inteiros, q);
        for (int i = 0; i < q; i++) {
            cout << *(vetor_inteiros + i);
            if (i < q - 1) {
                cout << " ";
            }
        }
        cout << "\n";
        free(vetor_inteiros);
    }
    return 0;
}