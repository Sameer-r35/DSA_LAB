#include <iostream>
using namespace std;

int findKthPositive(int arr[], int n, int k) {
    int left = 0, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        int missing = arr[mid] - (mid + 1);

        if (missing < k) {
            left = mid + 1;
        } else {

            right = mid;
        }
    }

    return left + k;
}

int main() {
    int arr[] = {2, 3, 4, 7, 11};
    int k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findKthPositive(arr, n, k);
    cout << result << endl;  // Output: 9

    return 0;
}
