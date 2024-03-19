#include <bits/stdc++.h>

using namespace std;

int main() {
    int A[MAX_N];
    int dp[MAX_N];

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            if (A[j] < A[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}