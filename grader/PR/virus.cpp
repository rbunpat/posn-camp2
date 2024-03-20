#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stringstream output;

    long long m;
    cin >> m;

    long long code_input;
    cin >> code_input;

    long long sum_move = 0;
    for (long long i = m; i > 0; i--) {
        sum_move += code_input % 10;
        code_input /= 10;
    }

    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        string word;
        cin >> word;

        for (auto& j : word) {
            if (j + sum_move > 'Z') {
                j = 'A' + ((j + sum_move) - 'Z') - 1;
            } else {
                j += sum_move;
            }
        }

        output << word << endl;
    }

    cout << output.str();

    return 0;
}
