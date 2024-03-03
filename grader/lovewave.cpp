#include <bits/stdc++.h>

using namespace std;

bool isValidString(const string &str)
{
    int iCount = 0, uCount = 0;
    for (char ch : str)
    {
        if (ch == 'I')
        {
            iCount++;
        }
        else if (ch == 'U')
        {
            uCount++;
            if (uCount > iCount)
            {
                return false;
            }
        }
    }
    return iCount == uCount;
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        string input;
        cin >> input;

        if (isValidString(input))
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
