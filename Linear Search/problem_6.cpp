#include <iostream>
using namespace std;

int main(){
    int accounts[2][3] = {
        {1, 2, 3},
        {3, 2, 1}
    };

    int m = 2;
    int n = 3;

    int maxWealth = 0;

    for (int i = 0; i < m; i++) {
        int currentWealth = 0;

        for (int j = 0; j < n; j++) {
            currentWealth = currentWealth + accounts[i][j];

        }

        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }

    cout << "Richest customer's wealth: " << maxWealth << endl;

    return 0;
}
