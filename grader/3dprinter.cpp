#include <bits/stdc++.h>

using namespace std;

int main() {
    int bruh;
    cin >> bruh;

    unsigned long long int currentPrinterCount = 1;

    unsigned long long int printedPieces = 0;

    unsigned long long int daysTaken = 0;

    while (printedPieces < bruh) {
        if (currentPrinterCount < (bruh / 2)) {
            currentPrinterCount += currentPrinterCount;
            // daysTaken++;
        } else {
           printedPieces += currentPrinterCount;
        }

        daysTaken++;
    }

    cout << daysTaken;

    return 0;
}