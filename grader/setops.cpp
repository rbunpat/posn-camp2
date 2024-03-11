#include <bits/stdc++.h>

using namespace std;

int main() {

    stringstream output;

    int setACount;
    int setBCount;

    cin >> setACount;

    int x[setACount];


    for(int i = 0; i < setACount; i++) {
        cin >> x[i];
    }

    cin >> setBCount;
    int y[setBCount];

    for (int i = 0; i < setBCount; i++) {
        cin >> y[i];
    }

    for(int i = 0; i < setACount; i++) {
        for (int j = 0; j < setBCount; j++) {
            if (x[i] == y[j]) {
                output << x[i] << " ";
            }
        }
    }

    output << endl;

    for(int i = 0; i < setACount; i++) {
        bool found = false;
        for (int j = 0; j < setBCount; j++) {
            if (x[i] == y[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            output << x[i] << " ";
        }
    }

    output << endl;

    cout << output.str() << endl;



    
    return 0;
}