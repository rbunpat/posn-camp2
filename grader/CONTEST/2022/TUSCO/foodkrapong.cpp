#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        
        if (a > 400 || b < 150 || b > 200) {
            count += 1;
        } 
    }

    unsigned long long int ans = n - count;

    cout << ans;

    return 0;
}