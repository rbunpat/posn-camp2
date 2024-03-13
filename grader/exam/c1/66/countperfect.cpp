#include <bits/stdc++.h>

using namespace std;

int main() {
    int bruh;
    cin >> bruh;

    for (int i = 0; i < bruh; i++) {
        int a, b;
        cin >> a;
        cin >> b;

        int count = floor(sqrt(b)) - floor(sqrt(a - 1));
        cout << count << endl;
    }

    return 0;
}