#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;

    stringstream output;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        queue<int> bruh;

        for (int j = 0; j < n; j++ ) {
            char cmd;
            cin >> cmd;

            if (cmd == 'a') {
                int x;
                cin >> x;

                bruh.push(x);
            }

            if (cmd == 'b') {
                if (!bruh.empty()) {
                    output << bruh.front() << " ";
                    bruh.pop();
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 'c') {
                output << bruh.size() << " ";
            }

            if (cmd == 'd') {
                if (!bruh.empty()) {
                    output << bruh.front() << " ";
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 'e') {
                if (!bruh.empty()) {
                    output << bruh.back() << " ";
                } else {
                    output << "-1" << " ";
                }
            }
            
        }

        output << endl;

     }

    cout << output.str();



    return 0;
}   