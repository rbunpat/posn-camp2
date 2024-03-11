#include <bits/stdc++.h>

using namespace std;

int main() {
    string genA, genB;
    cin >> genA >> genB;

    unsigned long long int matchCount;

    for (unsigned long long int i = 0; i < genA.length(); i++) {
        if (genA[i] == genB[i]) {
            matchCount += 1;
        }
    }

    unsigned long long int percentage = (matchCount * 100) / genA.length();

    // cout << percentage;

    if (percentage >= 60) {
        cout << "Vela";
    } else if (percentage >= 40) {
        cout << "Aquarius";
    } else if (percentage >= 20) {
        cout << "Norma";
    } else {
        cout << "Aldebaran";
    }

    return 0;
}