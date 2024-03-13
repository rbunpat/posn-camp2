#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int bruh[n];

    for (int i = 0; i < n; i++) {
        cin >> bruh[i];
    }

    sort(bruh, bruh + n);

    int total = 0;
    int length = 0;

    for (int i = 0; i < n; i++) {
        total += (bruh[i] + length) * 2;
        length += bruh[i];
    }
    cout << total;
    return 0;
}