#include <bits/stdc++.h>

using namespace std;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &dp[i], dp[i] += dp[i - 1]);
        scanf("%d", &n);
        
    }

    return 0;
}