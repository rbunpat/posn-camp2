#include <bits/stdc++.h>

using namespace std;

int arr[1001];

int main() {
    stringstream ss;

    int tests, n;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        cin >> n;
        vector<int> vec;
        vector<int> ::iterator itr;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            itr = lower_bound(vec.begin(), vec.end(), arr[j]);

            if (itr == vec.end()) {
                vec.push_back(arr[j]);
            } else {
                *itr = arr[j];
            }

            
        }
        ss << vec.size() << endl;

    }

    cout << ss.str();

    return 0;
}