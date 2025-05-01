#include <iostream>

using namespace std;

int singleNumber(int nums[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= nums[i]; // XOR all elements
    }
    return result;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size]; // Declare array of user-defined size
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i]; // Take array input
    }

    cout << "Single Number: " << singleNumber(nums, size) << endl;
    return 0;
}
