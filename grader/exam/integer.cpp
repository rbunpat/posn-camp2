#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;
    int testCaseCount;

    cin >> testCaseCount;

    for (int i = 0; i < testCaseCount; i++) {
        double input;
        cin >> input;

        if (int(input) == input) {
            output << "OK" << endl;
        } else {
            output << "NOT INTEGER" << endl;
        }
    }

    cout << output.str();


    return 0;
}