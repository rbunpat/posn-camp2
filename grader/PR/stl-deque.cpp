#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    cin >> count;

    stringstream output;

    for (int j = 0; j < count; j++) {
        int n;
        cin >> n;

        deque<int> bruh;

        for (int i = 0; i < n; i++) {
            int cmd;
            cin >> cmd;

            if (cmd == 1) {
                int x;
                cin >> x;

                bruh.push_front(x);

                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 2) {
                int x;
                cin >> x;

                bruh.push_back(x);

                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 3) {
                if (!bruh.empty()) {
                    bruh.pop_front();
                }

                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 4) {

                if (!bruh.empty()) {
                    bruh.pop_back();
                }

                if (!bruh.empty()) {
                    for (auto it = bruh.begin(); it != bruh.end(); it++) {
                        output << *it << " ";
                    }
                } else {
                    output << "-1" << " ";
                }
                




            }

            if (cmd == 5) {

                sort(bruh.begin(), bruh.end());


                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 6) {

                reverse(bruh.begin(), bruh.end());

                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 7) {
                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << *it << " ";
                }
            }

            if (cmd == 8) {
                output << bruh.size() << " ";
            }

            if (cmd == 9) {
                if (!bruh.empty()) {
                    output << bruh.front() << " ";
                } else {
                    output << "-1" << " ";
                }
            }

            if (cmd == 10) {
                if (!bruh.empty()) {
                    output << bruh.back() << " ";
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