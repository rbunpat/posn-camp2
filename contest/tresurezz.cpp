#include <bits/stdc++.h>

using namespace std;

int main() {
    int length, width, walkableDistance;
    int currentMaxValue = 0;
    int maxValueWidth, maxValueLength;

    cin >> width >> length >> walkableDistance;

    int parkPlan[width][length];

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            cin >> parkPlan[i][j];

            if ((parkPlan)[i][j] > currentMaxValue) {
                currentMaxValue = parkPlan[i][j];
                maxValueWidth = i;
                maxValueLength = j;
            }
            
        }
    }



    return 0;
}