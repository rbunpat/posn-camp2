#include <bits/stdc++.h>

using namespace std;

int main() {
    int contestantCount;
    cin >> contestantCount;

    int contestantScores[contestantCount];

    int benchmark;
    cin >> benchmark;

    for (int i = 0; i < contestantCount; i++) {
        cin >> contestantScores[i];
    }

    int winnerCount = 0;

    for (int i = 0; i < contestantCount; i++) {
        if (contestantScores[i] >= contestantScores[benchmark - 1] ) {
            winnerCount++;
        }
    }

    cout << winnerCount;

    return 0;
}