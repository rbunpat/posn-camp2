#include <bits/stdc++.h>
using namespace std;

void convertToRoman(int num, int& ones, int& fives, int& tens, int& fifties, int& hundreds) {
    while (num > 0) {
        if (num >= 100) {
            hundreds += (num / 100);
            num %= 100;
        }
        else if (num >= 90) {
            hundreds++;
            tens++;
            num -= 90;
        }
        else if (num >= 50) {
            fifties++;
            num -= 50;
        }
        else if (num >= 40) {
            fifties++;
            tens++;
            num -= 40;
        }
        else if (num >= 10) {
            tens++;
            num -= 10;
        }
        else if (num >= 9) {
            tens++;
            ones++;
            num -= 9;
        }
        else if (num >= 5) {
            fives++;
            num -= 5;
        }
        else if (num >= 4) {
            fives++;
            ones++;
            num -= 4;
        }
        else if (num >= 1) {
            ones++;
            num--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int ones = 0, fives = 0, tens = 0, fifties = 0, hundreds = 0;

    for (int m = 1; m <= n; m++) {
        int k = m;
        convertToRoman(k, ones, fives, tens, fifties, hundreds);
    }

    cout << ones << " " << fives << " " << tens << " " << fifties << " " << hundreds << endl;

    return 0;
}
