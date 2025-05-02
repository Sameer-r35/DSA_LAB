#include <iostream>
using namespace std;

int maxInArray(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

long long totalHours(int arr[], int n, int k) {
    long long hours = 0;
    for (int i = 0; i < n; i++) {
        hours = hours + (arr[i] + k - 1) / k;
    }
    return hours;
}

int minEatingSpeed(int piles[], int n, int h) {
    int left = 1;
    int right = maxInArray(piles, n);
    int ans = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long hoursNeeded = totalHours(piles, n, mid);

        if (hoursNeeded <= h) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    int piles[] = {30, 11, 23, 4, 20};
    int h = 6;
    int n = sizeof(piles) / sizeof(piles[0]);

    int result = minEatingSpeed(piles, n, h);
    cout << result << endl;

    return 0;
}
