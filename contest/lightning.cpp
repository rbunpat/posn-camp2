#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) 
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0;
    int number = 1;
    while (count < n) {
        ++number;
        if (isPrime(number))
            ++count;
    }
    return number;
}

int main() {
    int start, end;

    cin >> start >> end;


    int primeSum = 0;

    for (int i = start; i <= end; ++i) {
        primeSum += nthPrime(i);
    }

    cout << primeSum;
    
    return 0;
}
