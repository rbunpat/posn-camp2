#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    cin >> n;
    double waterVolume;
    cin >> waterVolume;

    vector<double> roomSize(n);
    vector<double> water(n);

    for (int i = 0; i < n; i++) {
        cin >> roomSize[i];
    }

    double avgWater = waterVolume / n;

    int temp = n;

    for (int i = 0; i < n; i++) {
        if (roomSize[i] < avgWater) {
            water[i] = roomSize[i];
            waterVolume -= roomSize[i];
            temp--;
        } else {
            water[i] = 0;
        }
    }

    avgWater = waterVolume / temp;

    for (int i = 0; i < n; i++) {
        if (roomSize[i] < avgWater && water[i] == 0) {
            water[i] = roomSize[i];
            waterVolume -= roomSize[i];
            temp--;
        }
    }

    avgWater = waterVolume / temp;

    for (int i = 0; i < n; i++) {
        if (water[i] == 0) {
            water[i] = avgWater;
        }
    }

    for (int i = 0; i < n; i++) {
        if (water[i] == (int)water[i]) {
            cout << (int)water[i] << endl;
        } else {
            cout << fixed << setprecision(2) << water[i] << endl;
        }
    }




    return 0;
}