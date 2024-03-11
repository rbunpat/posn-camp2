#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double a, b, m;
        cin >> a >> b >> m;

        cout << fmod(pow(a, b), m) << endl;
    }

    return 0;
}