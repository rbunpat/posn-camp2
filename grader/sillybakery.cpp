#include <bits/stdc++.h>

using namespace std;

int main() {
    int customers;

    cin >> customers;

    float cakeCount = 0;

    for (int i = 0; i < customers; i++) {
        int a, b, c, d, e;
        cin >> a; // 1lb
        cin >> b; // 0.75lb
        cin >> c; // 0.5lb
        cin >> d; // 0.25lb
        cin >> e; // 0.125lb

        cakeCount += a;
        cakeCount += b * 0.75;
        cakeCount += c * 0.5;
        cakeCount += d * 0.25;
        cakeCount += e * 0.125;
    }

    int totalCakeCount = ceil(cakeCount);


    cout << totalCakeCount;
    return 0;
}