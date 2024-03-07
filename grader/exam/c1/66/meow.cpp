#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;

    int stringCount;
    cin >> stringCount >> ws;

    string input[stringCount];

    for (int i = 0; i < stringCount; i++) {
        getline(cin, input[i]);
    }

    for (int i = 0; i < stringCount; i++) {
        string currentString = input[i];

        for (int bruh = 0; bruh < currentString.length(); bruh++) {
            if (currentString[bruh] == 'm' && currentString[bruh + 1] == 'e' && currentString[bruh + 2] == 'o' && currentString[bruh + 3] == 'w') {
                if (currentString[bruh + 4] == ' ') {
                    output << "NO" << endl;
                } else {
                    output << "MEOW" << endl;
                }
            }
        }


    }



    return 0;
}