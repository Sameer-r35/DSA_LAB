#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int length = 5;
    int evenDigitCount = 0;

    for (int i = 0; i < length; i++) {
        int digits = countDigits(nums[i]);
        if (digits % 2 == 0) {
            evenDigitCount++;
        }
    }

    cout << "Count of numbers with even number of digits: " << evenDigitCount << endl;

    return 0;
}
