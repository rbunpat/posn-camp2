#include <bits/stdc++.h>

using namespace std;

int main() {
    int enterHour, enterMinute, exitHour, exitMinute;
    cin >> enterHour >> enterMinute >> exitHour >> exitMinute;

    int enterTime = (enterHour * 60) + enterMinute;
    int exitTime = (exitHour * 60) + exitMinute;

    double timeSpent = exitTime - enterTime;

    // cout << timeSpent << endl;

    double cost = 0;

    if (timeSpent <= 15) {
        cost = 0;
    } else if (timeSpent <= 180) {
        // cout << timeSpent / 60 << endl;
        // cout << ceil((timeSpent / 60)) << endl;
        cost = ceil((timeSpent / 60)) * 10;
    } else if (timeSpent <= 360) {
        cost = 30;
        cost += ceil((timeSpent - 180) / 60) * 20;
    } else {
        cost = 200;
    }

    cout << cost;

    return 0;
}