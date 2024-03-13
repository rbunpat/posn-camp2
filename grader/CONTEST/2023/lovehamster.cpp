#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int bruh;
    cin >> bruh;

    unsigned long long int total = 0;

    for (unsigned long long int lmao = 0; lmao < bruh; lmao++) {
        unsigned long long int lol;
        cin >> lol;
        total += lol;
    }

    if (total % 3 == 0) {
        cout << "Y";
    } else {
        cout << "N";
    }

    return 0;
}