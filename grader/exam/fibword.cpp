#include <bits/stdc++.h>

using namespace std;

unsigned long long wordSize[60];
unsigned long long a;
unsigned long long b;
unsigned long long idx;

char fibChar(unsigned long long n, int i) {
    if (i == 0) {
        return 'A';
    }
    if (i == 1) {
        return 'B';
    }

    unsigned long long size1 = wordSize[i - 2];
    unsigned long long size2 = wordSize[i - 1];

    if (n >= size1) {
        return fibChar(n - size1, i - 1);
    }

    if (n < size1) {
        return fibChar(n, i - 2);
    }

}


int main() {

    stringstream output;
    
    wordSize[0] = 1;
    wordSize[1] = 1;

    for (int i = 2; i < 60; i++) {
        wordSize[i] = wordSize[i - 1] + wordSize[i - 2];
    }

    cin >> a;

    for (int j = 0; j < a; j++) {
        cin >> idx;
        cin >> b;

        output << fibChar(b - 1, idx - 1) << endl;
    }

    cout << output.str();

    return 0;
}