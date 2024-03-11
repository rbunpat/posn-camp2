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

    int wut = 0;
    
    wut = (bruh[n - 1] * 2) + bruh[0];

    cout << wut;

    return 0;
}