#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;

    cin >> n;
    cin >> t;

    int power[n];

    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }

    sort(power, power + n);

    for (int i = 0; i < t; i++) {
        int input;
        long long index;

        cin >> input;

        index = lower_bound(power, power + n, input) - power;


        cout << index << endl;
    }


    



    return 0;
}