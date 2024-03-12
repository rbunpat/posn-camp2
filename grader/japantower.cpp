#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n;
    cin >> n;

    int bruh[n];

    for (int i = 0; i < n; i++) {
        cin >> bruh[i];
    }

    cout << 0 << " ";

    int bruhCount = 0;

    for (int i = 1; i < n; i++) {
        bruhCount = 0;
        for (int j = 0; j < i; j++) {
            if (bruh[j] <= bruh[i]) {
                bruhCount++;
            }
        }

        cout << bruhCount << " ";
    }

    return 0;
}