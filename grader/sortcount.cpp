#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    int bruh[n];

    for (int i = 0; i <  n; i++) {
        cin >> bruh[i];
    }

    //bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (bruh[j] > bruh[j + 1]) {
                swap(bruh[j], bruh[j + 1]);
                count++;
            }
        }
    }

    cout << count;



    return 0;
}