#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;
    bool isNugget = false;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i % 6 == 0 || i % 9 == 0 || i % 20 == 0) {
            output << i << "\n";
            isNugget = true;
        }
    }

    if (!isNugget) {
        cout << "no";
    } else {
        cout << output.str();
    }

    return 0;
}
