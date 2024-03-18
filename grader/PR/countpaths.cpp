#include <bits/stdc++.h>

using namespace std;

int row, col;

int paths[100000][100000];

int modAns = 1e9 + 7;


int countPaths(int i, int j) {
    if (i == 1 && j == 1) {
        return 1;
    }

    if (i < 1 || j < 1) {
        return 0;
    }

    if ()


}

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        cin >> row;
        cin >> col;

        cout << countPaths(row, col) << endl;
    }
    





    return 0;
}