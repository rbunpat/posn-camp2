#include <bits/stdc++.h>
using namespace std;

const int MAX_NUM = 300001;

int main() {
    vector<bool> isPrime(MAX_NUM, true);
    for (int i = 3; i < MAX_NUM; i += 2) {
        if (isPrime[i]) {
            for (int j = i * 2; j < MAX_NUM; j += i)
                isPrime[j] = false;
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        if (p == 4)
            cout << 1 << endl;
        else {
            int count = 0;
            for (int j = 3; j <= p / 2; j += 2) {
                if (isPrime[j] && isPrime[p - j])
                    count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}
