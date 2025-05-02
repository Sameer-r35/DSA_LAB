#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int getCommon(int nums1[], int n1, int nums2[], int n2) {
    int minCommon = -1;
    for (int i = 0; i < n1; i++) {
        if (i > 0 && nums1[i] == nums1[i - 1])
            continue;
        int found = binarySearch(nums2, n2, nums1[i]);
        if (found == 1) {
            minCommon = nums1[i];
            break;
        }
    }
    return minCommon;
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
