#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long num) {
    if (num <= 1) 
        return false;
    for (long long i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

long long nthPrime(long long n, long long memoizedPrimes[], long long& count) {
    long long number = memoizedPrimes[count - 1] + 1;
    while (count < n) {
        if (isPrime(number)) {
            memoizedPrimes[count++] = number;
        }
        ++number;
    }
    return memoizedPrimes[n - 1];
}

int main() {
    long long start, end;

    cin >> start >> end;

    long long memoizedPrimes[end];
    memoizedPrimes[0] = 2;
    long long primeCount = 1;

    long long primeSum = 0;

    for (long long i = start; i <= end; ++i) {
        primeSum += nthPrime(i, memoizedPrimes, primeCount);
    }

    cout << primeSum;
    
    return 0;
}
