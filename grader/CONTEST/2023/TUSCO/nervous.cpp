#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    stringstream output;
    int lowerCount = 0;
    int upperCount = 0;

    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (islower(input[i])) {
            lowerCount++;
        } else if (isupper(input[i])) {
            upperCount++;
        }
    }

    if (upperCount > lowerCount) {
        for (int bruh = 0; bruh < input.length(); bruh++) {
            output << (char)toupper(input[bruh]);
        }
    }

    if (lowerCount > upperCount) {
        for (int bruh = 0; bruh < input.length(); bruh++) {
            output << (char)tolower(input[bruh]);
        }
    }

    if (lowerCount == upperCount) {
        for (int bruh = 0; bruh < input.length(); bruh++) {
            output << (char)tolower(input[bruh]);
        }
    }

    cout << output.str();



    return 0;
}