#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<unsigned long long int, vector<unsigned long long int>, greater<unsigned long long int>> bruh;


    stringstream output;
    unsigned long long int sum;
    unsigned long long int n;
    cin >> n;

    sum = 0;

    for (unsigned long long int i = 0; i < n; i++) {
        int x;
        cin >> x;
        bruh.push(x);
    }

    while (bruh.size() > 1) {
        unsigned long long int a = bruh.top();
        bruh.pop();
        unsigned long long int b = bruh.top();
        bruh.pop();
        sum += a + b;
        bruh.push(a + b);
    }

    output << sum;

    cout << output.str();


    return 0;
}