#include <bits/stdc++.h>

using namespace std;

int a, b;
long long gameMap[1000][1000];

long long modAns = 1e9 + 7;

int main()
{

    cin >> a;
    cin >> b;

    gameMap[0][0] = 1;
    gameMap[1][0] = 1;
    gameMap[1][1] = 1;

    
    for (int i = 2; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (j == 0 || i == j)
            {
                gameMap[i][j] = 1;
            }
            else {
                gameMap[i][j] = gameMap[i - 1][j - 1] % modAns + gameMap[i - 1][j] % modAns;
            }
        }
    }


    cout << gameMap[a + b - 1][b - 1] % modAns;

    return 0;
}