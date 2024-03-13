#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;

    unsigned long long int sum = 0;
    
    for (unsigned long long int i = 0; i < n; i++) {
        unsigned long long int x, y;
        cin >> x >> y;

        sum += pow(x, y);
        
    }

    sum = sum % 1000000007;

    cout << sum << endl;

    return 0;
}