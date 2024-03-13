#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;

    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    
    output << (a[1] * b[2]) - (a[2] * b[1]);

    output << " ";

    output << (a[2] * b[0]) - (a[0] * b[2]);

    output << " ";

    output << (a[0] * b[1]) - (a[1] * b[0]);

    cout << output.str();

    return 0;
}