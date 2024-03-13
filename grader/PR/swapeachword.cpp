#include <bits/stdc++.h>

using namespace std;

string invertCharacters(string input) {
    string result = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        result += input[i];
    }
    return result;  
}

int main() {
    string inputString, tempStore, resultString;
    getline(cin, inputString);

    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == ' ') {
            resultString += invertCharacters(tempStore) + " ";
            tempStore = "";
        } else {
            tempStore += inputString[i];
        }
    }

    resultString += invertCharacters(tempStore);

    cout << resultString << endl;
    
    return 0;
}