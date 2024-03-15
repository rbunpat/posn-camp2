#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> input;
    unordered_map<int, int> bruh;

    int sum = 0;
    int count = 0;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }    

    bruh[0] = 1;

    for (int i = 0; i < input.size(); ++i) {
        sum += input[i];
        if (bruh.find(sum) != bruh.end()) {
            count += bruh[sum];
        }
        bruh[sum]++;
    }

    cout << count << endl;
    
    return 0;
}
