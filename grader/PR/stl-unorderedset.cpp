#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;

    stringstream output;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        unordered_set<int> bruh;

        for (int j = 0; j < n; j++) {
            char cmd;
            cin >> cmd;

            if (cmd == 'a') {
                int x;
                cin >> x;
                bruh.insert(x);
            }

            if (cmd == 'b') {
                int x;
                cin >> x;
                bruh.erase(x);
            }

            if (cmd == 'c') {
                int x;
                cin >> x;
                if (bruh.find(x) != bruh.end()) {
                    output << "1 ";
                } else {
                    output << "-1 ";
                }
            }

            if (cmd == 'd') {
                output << bruh.size() << " ";
            }
        }

        output << endl;
    }

    cout << output.str();

    return 0;
}