#include <bits/stdc++.h>

using namespace std;

int main()
{
    int date = 0;
    bool birthdayTable[5];

    fill(birthdayTable, birthdayTable + 5, false);

    for (int i = 0; i < 5; i++)
    {
        int isInTable;
        cin >> isInTable;
        if (isInTable == 1)
        {
            birthdayTable[i] = true;
        }
    }

    if (birthdayTable[4])
    {
        date += 16;
    }

    if (birthdayTable[3])
    {
        date += 8;
    }

    if (birthdayTable[2])
    {
        date += 4;
    }

    if (birthdayTable[1])
    {
        date += 2;
    }

    if (birthdayTable[0])
    {
        date += 1;
    }

    cout << "Your Birthday is :" << date << endl;

    return 0;
}