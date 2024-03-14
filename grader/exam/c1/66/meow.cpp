#include <bits/stdc++.h>
using namespace std;

bool isValidString(int index, string input)
{
    const string checkString = "meow";

    for (int i = 0; i < 4; ++i)
    {
        if (index + i >= input.length() || input[index + i] != checkString[i])
            return false;
    }

    return true;
}

int main()
{
    const string checkString = "meow";
    string input;

    stringstream output;

    int index;
    int n;

    bool isMeow = true;
    bool isM = false;

    cin >> n >> ws;

    while (n--)
    {
        getline(cin, input);

        index = 0;
        isMeow = 1;

        while (index < input.length() && isMeow)
        {
            if (input[index] == ' ')
            {
                index += 1;
                continue;
            }

            isM = input[index] == 'm';

            while (index < input.length() && input[index] != ' ' && isM && isMeow)
            {
                isM = isValidString(index, input);
                if (isM) {
                    index += 4;
                }
            }

            if (isM)
            {
                output << "YES" << endl;
                isMeow = 0;
            }

            while (index < input.length() && input[index] != ' ') {
                index += 1;
            }
        }
        if (isMeow) {
            output << "NO" << endl;
        }
    }

    cout << output.str();

    return 0;
}