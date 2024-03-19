#include <bits/stdc++.h>

using namespace std;

int row, col;

int paths[101][101];

int modAns = 1e9 + 7;


int countPaths(int i, int j) {

    if (i < 0 || j < 0) {
        return 0;
    }

    if (paths[i][j] != -1) {
        return paths[i][j];
    } else {
        paths[i][j] = ((countPaths(i - 1, j) % modAns) + (countPaths(i, j - 1) % modAns)) % modAns;
        return paths[i][j];
    
    }



}

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        cin >> row;
        cin >> col;

        memset(paths, -1, sizeof(paths));

        paths[0][0] = 1;

        cout << countPaths(row - 1, col - 1) << endl;
    }
    





    return 0;
}