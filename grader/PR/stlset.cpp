#include <bits/stdc++.h>

using namespace std;

int main() {

    stringstream output;
    
    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        set<int> bruh;

        for (int j = 0; j < n; j++) {
            char cmd;
            cin >> cmd;

            if (cmd == 'a') {
                int x;
                cin >> x;
                bruh.insert(x);
            }

            if (cmd == 'b') {
                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 'c') {
                int x;
                cin >> x;
                bruh.erase(x);
            }

            if (cmd == 'd') {
                int x;
                cin >> x;
                if (bruh.find(x) != bruh.end()) {
                    output << "1 ";
                } else {
                    output << "-1 ";
                }
            }

            if (cmd == 'e') {
                output << bruh.size() << " ";
            }
         }

        output << endl;
    }

    cout << output.str();

    return 0;
}