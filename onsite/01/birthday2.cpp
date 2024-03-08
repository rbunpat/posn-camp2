#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, sum = 0;
    char ch;

    for (i = 1; i < 32; i *= 2)
    {
        int co;
        co = 0;

        for (j = 1; j < 32; j++)

        if ((j & i) == i)
        {
            cout << setw(3) << j;
            co++;

            if (co % 5 == 0) cout << endl;
        }

        cout << endl
             << "Is your birthday in the table? (y/n): ";
        cin >> ch;

        if (ch == 'y' || ch == 'Y') sum += i;


    }

            cout << "Your birthday is on " << sum << endl;

        return 0;
}