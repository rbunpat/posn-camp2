#include <bits/stdc++.h>

using namespace std;

bool isAbleToDivide(int boxes[], int boxesCount) {
    //check if choco count is even
    int sum = 0;

    for (int i = 0; i < boxesCount; i++) {
        sum += boxes[i];
    }

    return sum % 2 == 0;
}


bool isAbleToCombineBoxes(int boxes[], int boxesCount) {
    //check boxes
    int total = 0;
    for (int i = 0; i < boxesCount; i++) {
        total += boxes[i];
    }

    int halfChocolate = total / 2;
    bool possibleCombination[halfChocolate + 1];

    //make all false    
    for (int i = 0; i <= halfChocolate; i++) {
        possibleCombination[i] = false;
    }

    possibleCombination[0] = true;

    for (int i = 0; i < boxesCount; i++) {
        for (int j = halfChocolate; j >= boxes[i]; j--) {
            possibleCombination[j] = possibleCombination[j] || possibleCombination[j - boxes[i]];
        }
    }

    return possibleCombination[halfChocolate];

}

int main() {
    int queryCount;
    cin >> queryCount;
    stringstream output;

    while (queryCount--) {
        int boxesCount;
        cin >> boxesCount;

        int boxes[boxesCount];

        for (int i = 0; i < boxesCount; i++) {
            cin >> boxes[i];
        }

        if (isAbleToDivide(boxes, boxesCount) && isAbleToCombineBoxes(boxes, boxesCount)) {
            output << "YES" << endl;
        } else {
            output << "NO" << endl;
        }
    }

    cout << output.str();
    return 0;
}