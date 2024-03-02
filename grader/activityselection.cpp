#include <bits/stdc++.h>

using namespace std;

struct Activity {
    int start;
    int end;
};

bool compareActivities(const Activity &a, const Activity &b) {
    return a.end < b.end;
}

int main() {

    stringstream output;

    int activityCount;
    cin >> activityCount;

    for (int i = activityCount; i > 0; i--) {
        int bruh;
        cin >> bruh;

        vector<Activity> activities(bruh);

        for (int j = 0; j < bruh; ++j) {
            cin >> activities[j].start;
        }

        for (int wut = 0; wut < bruh; ++wut) {
            cin >> activities[wut].end;
        }

        //if there is no activity, end the program

        if (activities.size() == 0) {
            cout << 0 << endl;
            break;
        }

        sort(activities.begin(), activities.end(), compareActivities);

        int currentActivity = 1;
        int lastActivityEndTime = activities[0].end;

        for (int lol= 1; lol < activities.size(); ++lol) {
            int actStartTime = activities[lol].start;
            int actEndTime = activities[lol].end;

            if (actStartTime >= lastActivityEndTime) {
                ++currentActivity;
                lastActivityEndTime = actEndTime;
            }
        } 

        output << currentActivity << endl;
    }

    cout << output.str();
    

    return 0;
}