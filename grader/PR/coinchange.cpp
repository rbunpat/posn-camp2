#include <bits/stdc++.h>

using namespace std;

int x, n;

int arr[1000000];
int dp[1000000];

int coin(int i) {
    if (i == 0) {
        return 0;
    }

    if (i < 0) {
        return 1e9;
    }

    if (dp[i] != -1) {
        return dp[i];
    }

    int ans = 1e9;

    for (int j = 0; j < n; j++) {
        ans = min(ans, coin(i - arr[j]) + 1);
    }

    dp[i] = ans;
    return ans;


}

int main() {

    memset(dp, -1, sizeof(dp));

    cin >> x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << coin(x) << endl;


    return 0;
}