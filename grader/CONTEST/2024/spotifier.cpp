#include <bits/stdc++.h>

using namespace std;

unsigned long long int bruhman(unsigned long long int num) {
    unsigned long long int bruh = num - (num % 11);
    if (bruh >= num) {
        bruh -= 11;
    }

    if (bruh == 0) {
        return 1;
    }

    return bruh / 11;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stringstream output;

    unsigned long long int n;

    cin >> n;

    for (unsigned long long int i = 0; i < n; i++) {
        unsigned long long int num;
        cin >> num;

        if (num < 11) {
            output << num << " ";
            continue;
        }

        if (num == 1) {
            output << 1 << " ";
            continue;
        
        } else {
            unsigned long long int asd =  num - bruhman(num);

            if (asd >= 100) {
                output << asd - 1 << " ";
            } else {
                output << asd << " ";
            }
        }
    }

    cout << output.str();
    

    return 0;
}