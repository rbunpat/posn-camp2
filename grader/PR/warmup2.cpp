#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    const long long MOD = 1000000007;
    long long result = (n * n) % MOD;
    
    cout << result << endl;

    return 0;
}
