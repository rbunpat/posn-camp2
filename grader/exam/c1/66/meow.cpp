#include <bits/stdc++.h>

using namespace std;

int main() {
    string checkString = "meow";
    string input;

    bool isMeow = true;
    bool isM = false;

    int n, index;
    cin >> n >> ws;

    while (n--) {

        getline(cin, input);

        index = 0;
        isMeow = true;

        while (index < input.length() && isMeow) {
            if (input[index]  == ' ') {
                index += 1;
                continue;
            }

            isM = input[index] == 'm';

            while (index < input.length() && input[index] != ' ' && isM && isMeow) {
                for (int i = 0; i < 4; i++) {
                    if ((index + i) >= input.length() || input[index + i] != checkString[i]) {
                        isM = false;
                        break;
                    } else {
                        isM = true;
                        break;
                    }
                }

                if (isM) {
                    index += 4;
                    break;
                }
            }


            if (isM) {
                cout << "YES" << endl;
                isMeow = false;
            }

            while (index < input.length() && input[index] != ' ') {
                index += 1;
            }  
        }

        if (isMeow) {
            cout << "NO" << endl;
        }
    }


    return 0;
}