#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;
    string isb;

    cin >> isb;

    int sum = 0;

    // int digitCount = to_string(isb).length();




    sum += (isb[0] - '0') * 10;
    sum += (isb[1] - '0') * 9;
    sum += (isb[2] - '0') * 8;
    sum += (isb[3] - '0') * 7;
    sum += (isb[4] - '0') * 6;
    sum += (isb[5] - '0') * 5;
    sum += (isb[6] - '0') * 4;
    sum += (isb[7] - '0') * 3;
    sum += (isb[8] - '0') * 2;

    sum = sum % 11;

    sum = 11 - sum;

    cout << isb << sum;


    return 0;
}