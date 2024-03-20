#include <bits/stdc++.h>

using namespace std;

struct job {
    int id;
    int deadline;
    int profit;
};

bool cmpJob(const job& a, const job& b) {
    return a.profit > b.profit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stringstream output;

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<job> work(N);

        for (int i = 0; i < N; i++) {
           cin >> work[i].id >> work[i].deadline >> work[i].profit;
        }

        sort(work.begin(), work.end(), cmpJob);

        vector<int> ans(N, -1);
        vector<bool> timeslot(N, false);

        for (int i = 0; i < N; i++) {
            for (int j = min(N, work[i].deadline) - 1; j >= 0; j--) {
                if (!timeslot[j]) {
                    ans[j] = i;
                    timeslot[j] = true;
                    break;
                }
            }
        }

        int cnt = 0, res = 0;
        for (int i = 0; i < N; i++) {
            if (timeslot[i]) {
                cnt++;
                res += work[ans[i]].profit;
            }
        }
        output << cnt << " " << res << endl;
    }

    cout << output.str();

    return 0;
}
