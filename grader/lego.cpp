#include <bits/stdc++.h>

using namespace std;

int main() {
    int colCount;
    cin >> colCount;

    vector<int> lineLength(colCount);
    int totalLength = 0;

    //add the total length
    for (int i = 0; i < colCount; ++i) {
        cin >> lineLength[i];
        totalLength += lineLength[i];
    }

    int targetLength = totalLength / colCount;
    int num_moves = 0;

    for (int i = 0; i < colCount; ++i) {
        num_moves += abs(lineLength[i] - targetLength);
    }

    cout << num_moves / 2 << endl;

    return 0;
}
