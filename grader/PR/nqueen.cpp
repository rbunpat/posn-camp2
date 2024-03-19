#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100];

stringstream ss;

bool isValidPosition(int input) {
    int pos1 = input;

    for (int pos2 = 1; pos2 < pos1; pos2++) {
        if (arr[pos2] == arr[pos1] || (abs(arr[pos2] - arr[pos1]) == abs(pos2 - pos1))) {
            return false;
        }
    }

    return true;
 }

void nQueen(int idx) {
    if (idx == n) {
        ss << "[";

        for (int i = 1; i <= n; i++) {
            ss << arr[i] << " ";
        }

        ss << "]" << endl;

        return;
    } else {
        for (int j = 1; j <= n; j++) {
            arr[idx + 1] = j;
            if (isValidPosition(idx + 1)) {
                nQueen(idx + 1);
            }
        }
    }


}

int main() {

    int tests;
    cin >> tests;

    for (int bruh = 0; bruh < tests; bruh++) {
        cin >> n;
        memset(arr, 0, sizeof(arr));
        nQueen(0);
    }

    cout << ss.str();
    

    return 0;
}