#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> visited(n + 1, false);

    int k = 1, j = 1, count = 0;

    while (count != n) {
        if (k > m) k = 1;
        if (j > n) j = 1;

        if (visited[j]) {
            j++;
            continue;
        }

        if (k == m) {
            cout << j << ' ';
            visited[j] = true;
            count++;
        }

        k++;
        j++;
    }

    cout << endl;

    return 0;
}
