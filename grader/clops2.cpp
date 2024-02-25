#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int input, i, j, total;
    total = i = j = 0;
    cin >> input;

    for (i = input; i > 0; i--) {
        for (j = i; j > 0; j--) {
            total = total + i;
        }
    }

    cout << total;


    return 0;
}