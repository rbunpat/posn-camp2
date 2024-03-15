#include <bits/stdc++.h>

using namespace std;

const int maxNumber = 5e5 + 10;

double lmao[maxNumber];
double bruh[maxNumber];

int main() {

    stringstream output;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> lmao[i];
    }

    sort(lmao, lmao + n);

    bruh[0] = lmao[0];

    for (int i = 1; i < n; i ++) {
        lmao[i] += lmao[i - 1];
        bruh[i] = lmao[i] / (i + 1);
    }

    int wut;
    cin >> wut;

    double input;
    for (int i = 0; i < wut; i++) {
        cin >> input;
        output << upper_bound(bruh, bruh + n, input) - bruh << endl;
    }
    
    cout << output.str();

    return 0;
}