#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    string input;
    cin >> input;

    long long index = 0;
    long long n = input.length();

    for (int i = 0; i < n; i++) {
        //26 cuz there is 26 letters
        index = (index * 26 + (input[i] - 'a' + 1)) % MOD;
    }

    cout << index - 1 << endl;

    return 0;
}
