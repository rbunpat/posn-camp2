#include <bits/stdc++.h>

using namespace std;

bool checkMatchingParenthesis(char front, char back)
{

    if (front == '(' && back == ')')
    {
        return true;
    }
    else if (front == '[' && back == ']')
    {
        return true;
    }
    else if (front == '{' && back == '}')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkBruh(string queryString) {

    bool balanced = true;

    stack<char> inputStack;

    for (char character : queryString)
    {
        if (character == '(' || character == '[' || character == '{')
        {
            inputStack.push(character);
        }
        else
        {
            if (inputStack.empty() || !checkMatchingParenthesis(char(inputStack.top()), char(character)))
                balanced = false;
            inputStack.pop();
        }
    }

    return balanced;
}

int main()
{
    int i;
    int queryCount;
    cin >> queryCount;
    
    string queryString[queryCount];
    bool queryAnswer[queryCount];

    for (i = 0; i < queryCount; i++) {
        cin >> queryString[i];
    }

    for (i = 0; i < queryCount; i++) {
        queryAnswer[i] = checkBruh(queryString[i]);
    }

    for (i = 0; i < queryCount; i++) {
        cout << (queryAnswer[i] ? "Balanced" : "Not Balanced") << endl;
    }

    return 0;
}