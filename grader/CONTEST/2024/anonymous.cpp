#include <bits/stdc++.h>

using namespace std;

bitset <(int) 2e8+10> isPrime;
vector <int> primes;

int main() {
    stringstream output;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    primes.push_back(2);

    for ( long long int i = 3; i < 2e8+10; i += 2) {
        if (isPrime[i]) {
            continue;
        }
        primes.push_back(i);

        for ( long long int j = i * i; j < 2e8 + 10; i += (i << 1)) {
            isPrime[j] = true;
        }
    }

    int n;
    cin >> n;
    
    while (n--) {
        int input;
        cin >> input;

        int ans;
        ans = upper_bound(primes.begin(), primes.end(), input) - primes.begin() - 1;

        if (primes[ans] == input) {
            output << ans + 1 << endl;
        } else {
            output << primes[ans] << endl;
        }

    }
    

    cout << output.str();

    return 0;
}