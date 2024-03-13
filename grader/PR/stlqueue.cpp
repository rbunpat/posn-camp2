#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    int queryCount;
    cin >> queryCount;

    stack<int> st;

    for (int i = 0; i < queryCount; i++) {
        char query;
        cin >> query;

        if (query == 'a') {
            int value;
            cin >> value;
            st.push(value);
        } else if (query == 'b') {
            st.pop();
            cout << st.top() << endl;
        } else if (query == 'd') {
            cout << st.top() << endl;
        } else if (query == 'c') {
            cout << st.size() << endl;
        }
    }

    return 0;
}