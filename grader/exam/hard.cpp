#include <bits/stdc++.h>

using namespace std;

int main() {

    int result = 0;

    int testCount;
    cin >> testCount; 

    int input[testCount];
    for (int i = 0; i < testCount; i++) {
        cin >> input[i];
    }

    if (testCount % 5 != 0) {
        result = input[0] * 3;
        cout << result << endl;
        return 0;
    }

    return 0;
}