#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;

    stringstream output;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        unordered_map<int, int> bruh;

        for (int j = 0; j < n; j++) {
            char cmd;
            cin >> cmd;

            if (cmd == 'a') {
                int x, y;
                cin >> x;
                cin >> y;

                bruh[x] = y;
            }

            if (cmd == 'b') {
                int x;
                cin >> x;

                if (bruh.find(x) != bruh.end()) {
                    output << bruh[x] << " ";
                } else {
                    output << "-1 ";
                }
            }

            if (cmd == 'c') {
                output << bruh.size() << " ";
            }

            if (cmd == 'd') {
                int x;
                cin >> x;
                bruh.erase(x);
            }
        }

        output << endl;
    }

    cout << output.str();

    return 0;
}