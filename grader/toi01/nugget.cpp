#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;
    bool isNugget = false;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i % 6 == 0 || i % 9 == 0 || i % 20 == 0 ) {
            if (i != 0) {
                output << i << "\n";
                isNugget = true;
            }
            
        }
    }

    if (isNugget == false) {
        cout << "no";
    } else {
        cout << output.str();
        // cout << n;
    }

    // if (nuggetCount == 0) {
    //     cout << "no";
    // }

    return 0;
}