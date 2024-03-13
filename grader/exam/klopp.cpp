#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max = n;
    int steps = 1;

    while (n != 1) {
        if (n % 2 == 0) {
            n = floor(sqrt(n));
            max = std::max(max, n);
            steps++;
        } else {
            n = floor(sqrt(pow(n, 3)));
            max = std::max(max, n);
            steps++;
        }
    }

    cout << max << ' ' << steps;

    return 0;
}