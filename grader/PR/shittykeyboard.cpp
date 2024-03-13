#include <bits/stdc++.h>

using namespace std;

string formatShitInput(string input) {
    string formatted;
    string textToMove;

    bool isInsideBracket = false;

    for (char character: input) {
        if (character == '[') {
            isInsideBracket = true;
        } else if (character == ']') {
            isInsideBracket = false;
            formatted = textToMove + formatted;
            textToMove.clear(); //empty the temp text
        } else {
            if (isInsideBracket) {
                textToMove += character;
            } else {
                formatted += character;
            }
        }
    }

    return formatted;
}

int main() {
    string shitInput, output;
    cin >> shitInput;

    output = formatShitInput(shitInput);

    cout << output << endl;

    

    return 0;
}