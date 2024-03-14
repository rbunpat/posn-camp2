#include <bits/stdc++.h>

using namespace std;

int primeLessThanNumber(unsigned long long int num) {
    if (num <= 2) {
        return 1;
    }

    vector<bool> isPrime(num);

    for (int i = 0; i < num; ++i) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (unsigned long long int p = 2; (p * p) < num; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i < num; i += p)
                isPrime[i] = false;
        }
    }

    for (unsigned long long int i = (num - 1); i >= 2; --i) {
        if (isPrime[i]) {
            return i;
        }
    }

    return 1;
}

int main() {


    unsigned long long int n;
    cin >> n;


    for (unsigned long long int i = 0; i < n; i++) {
        unsigned long long int num;
        cin >> num;

        unsigned long long int result = primeLessThanNumber(num);

        cout << result << endl;

    }

    

    return 0;
}