#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n], evenCount = 0, oddCount = 0;
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
            if (evenCount == 1) evenIndex = i + 1;
        } else {
            oddCount++;
            if (oddCount == 1) oddIndex = i + 1;
        }
    }

    if (evenCount == 1) {
        cout << evenIndex << endl;
    } else {
        cout << oddIndex << endl;
    }

    return 0;
}
