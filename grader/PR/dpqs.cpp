#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream ss;
    int n, m;
    cin >> n;

    int arr[n+1];

    arr[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];

        arr[i] += arr[i - 1];
    }

    cin >> m;
    for (int bruh = 1; bruh <= m; bruh++) {
        int a, b;
        cin >> a;
        cin >> b;

        b++;

        int ans = arr[b] - arr[a];

        ss << ans << endl;
    }

    cout << ss.str();
    return 0;
}
