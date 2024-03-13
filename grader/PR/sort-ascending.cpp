#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int inputCount;
    cin >> inputCount;

    int inputArray[inputCount];

    for (int i = 0; i < inputCount; i++) {
        cin >> inputArray[i];
    }

    sort(inputArray, inputArray + inputCount);

    for (auto i: inputArray) {
        cout << i << " ";
    }

    return 0;
}