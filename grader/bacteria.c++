#include <bits/stdc++.h>

using namespace std;

int main() {
    long long bacteriaNeeded;
    cin >> bacteriaNeeded;

    if (bacteriaNeeded == 1 || bacteriaNeeded == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    long long days = floor(log2(bacteriaNeeded));

    cout << days << endl;
    return 0;
}
