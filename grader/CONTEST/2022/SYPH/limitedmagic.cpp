#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int numbersCount;
    cin >> numbersCount;

    unsigned long long int numbers[numbersCount];

    for (unsigned long long int i = 0; i < numbersCount; i++) {
        cin >> numbers[i];
    }

    unsigned long long int sum = numbers[0];

    for (unsigned long long int i = 1; i < numbersCount; i++) {
        sum *= numbers[i];
    }

    cout << sum;

    return 0;
}