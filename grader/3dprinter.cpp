#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int cupsRequired;
    long long int daysCount = 0;
    long long int printersCount = 1;

    cin >> cupsRequired;

    while (cupsRequired > 0) {

        if (cupsRequired == 1) {
            cout << 1;
            return 0;
        }
        
        if (printersCount >= cupsRequired) {
            //just print the cup lol
            daysCount++;
            break;
        } else {
            daysCount++;
            cupsRequired = cupsRequired - printersCount + 1;//cuz one printer is already used to print another printer
            printersCount++;
        }
    }

    cout << daysCount;

    return 0;
}