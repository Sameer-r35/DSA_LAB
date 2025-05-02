#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int getCommon(int nums1[], int n1, int nums2[], int n2) {
    for (int i = 0; i < n1; i++) {
        if (binarySearch(nums2, n2, nums1[i]) == 1)
            return nums1[i];
    }
    return -1;
}

int main() {
    int nums1[] = {1, 2, 3, 6};
    int nums2[] = {2, 3, 4, 5};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    int result = getCommon(nums1, n1, nums2, n2);
    cout << result << endl;

    return 0;
}
