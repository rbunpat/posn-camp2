#include <bits/stdc++.h>

using namespace std;

int main()
{
    int queryCount;
    cin >> queryCount;

    int queryArray[queryCount];

    for (int i = 0; i < queryCount; i++)
    {
        cin >> queryArray[i];
    }

    for (int i = 0; i < queryCount - 5; ++i)
    {
        for (int j = i + 1; j < queryCount - 4; ++j)
        {
            for (int m = j + 1; m < queryCount - 3; ++m)
            {
                for (int n = m + 1; n < queryCount - 2; ++n)
                {
                    for (int p = n + 1; p < queryCount - 1; ++p)
                    {
                        for (int q = p + 1; q < queryCount; ++q)
                        {
                            cout << queryArray[i] << " " << queryArray[j] << " " << queryArray[m] << " "
                                 << queryArray[n] << " " << queryArray[p] << " " << queryArray[q] << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}