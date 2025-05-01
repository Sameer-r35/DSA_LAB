#include <iostream>

using namespace std;

bool isPresent(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

void findMissingNumbers(int nums[], int size) {
    cout << "Missing numbers: ";
    for (int i = 1; i <= size; i++) {
        if (!isPresent(nums, size, i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1}; // Example input
    int size = sizeof(nums) / sizeof(nums[0]);

    findMissingNumbers(nums, size);

    return 0;
}
