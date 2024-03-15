#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;
    stringstream output;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        vector<int> bruh;

        for (int j = 0; j < n; j++) {
            char cmd;
            cin >> cmd;

            if (cmd == 'a') {
                int x;
                cin >> x;
                bruh.push_back(x);
            }

            if (cmd == 'b') {
                sort(bruh.begin(), bruh.end());
            }

            if (cmd == 'c') {
                reverse(bruh.begin(), bruh.end());
            }

            if (cmd == 'd') {
                output << bruh.size() << " ";
            }

            if (cmd == 'e') {
                for (int k = 0; k < bruh.size(); k++) {
                    output << bruh[k] << " ";
                }
            }

            if (cmd == 'f') {
                sort(bruh.begin(), bruh.end(), greater<int>());
            }
        }

        output << endl;
    }

    cout << output.str();

    return 0;
}