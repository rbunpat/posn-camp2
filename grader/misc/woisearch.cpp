#include <bits/stdc++.h>

using namespace std;

int main() {
    int lmao;
    cin >> lmao;

    int bruh[10] = {1, 3, 4, 6, 7, 9, 11, 12, 20, 100};

    int left = 0;
    int right = 9;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (bruh[mid] == lmao) {
            cout << mid + 1;
            return 0;
        } else if (bruh[mid] < lmao) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << -1;


    return 0;
}