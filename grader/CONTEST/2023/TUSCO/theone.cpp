#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    stringstream output;

    string refString = "LuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYouLuvYou";

    for (int i = 0; i < n; i++) {
        string query;
        cin >> query;

        if (refString.find(query) != string::npos) {
            output << "YES" << endl;
        } else {
            output << "NO" << endl;
        }
    }

    cout << output.str();

    return 0;
}