#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int numbersCount;
    cin >> numbersCount;

    unsigned long long int total = 0;
    for (int i = 0; i < numbersCount; i++) {
        unsigned long long int number;
        cin >> number;
        total += number;
    }

    cout << total;

    return 0;
}