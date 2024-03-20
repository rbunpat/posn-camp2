#include <bits/stdc++.h>

using namespace std;

int LongestCommonSubsequence(const string& x, const string& y) {
    int l1 = x.size();
    int l2 = y.size();

    vector<vector<int>> length(l1 + 1, vector<int>(l2 + 1, 0));

    for (int i = 1; i <= l1; ++i) {
        for (int j = 1; j <= l2; ++j) {
            if (x[i - 1] == y[j - 1]) {
                length[i][j] = length[i - 1][j - 1] + 1;
            } else {
                length[i][j] = max(length[i - 1][j], length[i][j - 1]);
            }
        }
    }

    return length[l1][l2];
}

int main() {

    stringstream output;
    int t;
    cin >> t;

    while (t--) {
        int l1, l2;
        cin >> l1 >> l2;

        string ch1, ch2;
        cin >> ch1 >> ch2;

        output << LongestCommonSubsequence(ch1, ch2) << "\n";
    }

    cout << output.str();

    return 0;
}
