#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    int max = -2e6;
    int answer = 0;

    cin >> n;

    int bruh[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        int wut = a * b;
        bruh[i] = wut;
    }

    for (int i = 0; i < n; i++) {
        if (bruh[i] > max) {
            max = bruh[i];
            answer = i;
        }
    }

    answer = answer + 1;

    cout << answer;

    return 0;
}