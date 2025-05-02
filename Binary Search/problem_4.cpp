#include <iostream>
using namespace std;

int findPeakElement(int nums[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    int nums[] = {1, 2, 1, 3, 5, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findPeakElement(nums, n);
    cout << result << endl;

    return 0;
}
