#include <bits/stdc++.h>

using namespace std;

int main() {
    int kidsCount, boatWeightCapacity;

    cin >> kidsCount >> boatWeightCapacity;

    int kidsWeight[kidsCount];

    for (int i = 0; i < kidsCount; i++) {
        cin >> kidsWeight[i];
    }

    sort(kidsWeight, kidsWeight + kidsCount);

    int boatCount = 0;

    int i = 0;
    int j = kidsCount - 1;

    while (i <= j) {
        if (kidsWeight[i] + kidsWeight[j] <= boatWeightCapacity) {
            i++;
        }

        j--;
        boatCount++;
    }

    cout << boatCount;

    return 0;
}