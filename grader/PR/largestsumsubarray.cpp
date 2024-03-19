#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = -1e9;
    int n;
    cin >> n;

    int arr[n + 1];
    int anotherarr[n + 1];

    anotherarr[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];

        anotherarr[i] = max(arr[i], anotherarr[i - 1] + arr[i]);

        ans = max(ans, anotherarr[i]);


    }

    cout << ans << endl;

    return 0;
}