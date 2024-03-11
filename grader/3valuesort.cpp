#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;

    int bruh[n];

    for (int i = 0; i <  n; i++) {
        cin >> bruh[i];
        if (bruh[i] < bruh[i - 1]) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}