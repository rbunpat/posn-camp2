#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<char> operatorsStack;
    string infixExpression, postfixExpression = "";
    unordered_map<char, int> precedenceMap = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};

    cin >> infixExpression;

    for (char& character : infixExpression) {
        if (isalnum(character)) {
            postfixExpression += character;
        }
        else if (character == '(') {
            operatorsStack.push(character);
        }
        else if (character == ')') {
            while (!operatorsStack.empty() && operatorsStack.top() != '(') {
                postfixExpression += operatorsStack.top();
                operatorsStack.pop();
            }
            operatorsStack.pop();
        }
        else {
            while (!operatorsStack.empty() && precedenceMap[operatorsStack.top()] >= precedenceMap[character]) {
                postfixExpression += operatorsStack.top();
                operatorsStack.pop();
            }
            operatorsStack.push(character);
        }
    }

    while (!operatorsStack.empty()) {
        postfixExpression += operatorsStack.top();
        operatorsStack.pop();
    }

    cout << postfixExpression << endl;

    return 0;
}
