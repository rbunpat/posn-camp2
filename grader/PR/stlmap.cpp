#include <bits/stdc++.h>

using namespace std;

int main() {

    stringstream output;

    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {

        int n;
        cin >> n;

        map<int, int> bruh;

        for (int j = 0; j < n; j++) {

            char cmd;
            cin >> cmd;

            if(cmd == 'a') {
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
                    output << "-1" << " ";
                }
            }

            if (cmd == 'c') {

                for (auto it = bruh.begin(); it != bruh.end(); it++) {
                    output << it->first << " " << it->second << " ";
                }
            }


        }

        output << endl;
    }

    cout << output.str();

    return 0;
}