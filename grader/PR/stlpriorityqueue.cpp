#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;

    cin >> count;

    stringstream output;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;

        priority_queue<int> bruh;

        for (int j = 0; j < n; j++) {
            int cmd;
            cin >> cmd;

            if (cmd == 1) {
                int x;
                cin >> x;

                bruh.push(x);

                priority_queue<int> temp = bruh;

                while (!temp.empty()) {
                    output << temp.top() << " ";
                    temp.pop();
                }

            }

            if (cmd == 2) {
                if (!bruh.empty()) {
                    output << bruh.top() << " ";
                    bruh.pop();
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 3) {
                if (!bruh.empty()) {
                    output << bruh.top() << " ";
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 4) {
                if (!bruh.empty()) {
                    output << bruh.size() << " ";
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 5) {
                if (!bruh.empty()) {
                    priority_queue<int> temp = bruh;

                    while (!temp.empty()) {
                        output << temp.top() << " ";
                        temp.pop();
                    }
                } else {
                    output << "-1" << " ";
                }
            }


            output << endl;
        }
    }

    cout << output.str();

    return 0;
}