#include <iostream>
using namespace std;

int uniqueOccurrences(int arr[], int n) {
    int num[1000];
    int freq[1000];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < k; j++) {
            if (arr[i] == num[j]) {
                freq[j]++;
                break;
            }
        }
        if (j == k) {
            num[k] = arr[i];
            freq[k] = 1;
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (freq[i] == freq[j]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << (uniqueOccurrences(arr, n) ? "true" : "false") << endl;
    return 0;
}
