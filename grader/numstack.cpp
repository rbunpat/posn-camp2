#include <bits/stdc++.h>

using namespace std;

int main() {
    int opsCount;
    cin >> opsCount;

    stack<int> numStack;
    for (int i = 0; i < opsCount; i++) {
        string input;
        cin >> input;

        try
        {
            int num = stoi(input);
            numStack.push(num);
        }
        catch(const std::exception& e)
        {
            if (input == "+") {
                int num1 = numStack.top();
                numStack.pop();
                int num2 = numStack.top();
                numStack.pop();
                numStack.push(num1 + num2);
            }

            if (input == "-") {
                int num1 = numStack.top();
                numStack.pop();
                int num2 = numStack.top();
                numStack.pop();
                numStack.push(num2 - num1);
            }

            if (input == "*") {
                int num1 = numStack.top();
                numStack.pop();
                int num2 = numStack.top();
                numStack.pop();
                numStack.push(num1 * num2);
            }

            if (input == "/") {
                int num1 = numStack.top();
                numStack.pop();
                int num2 = numStack.top();
                numStack.pop();
                numStack.push(num2 / num1);
            }
        }
        


    }

    cout << numStack.top() << endl;

    return 0;
}