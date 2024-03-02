#include <bits/stdc++.h>

using namespace std;

void printList(list<int> &inputList, stringstream &output) {
    if (inputList.empty()) {
        output << "-1" << endl;
        return;
    }

    for (auto it = inputList.begin(); it != inputList.end(); ++it) {
        output << *it << " ";
    }

    output << endl;
}

int main() {
    int testCount;
    cin >> testCount;

    stringstream output;

    while (testCount--) {
        int inputCount;
        cin >> inputCount;

        list<int> inputList;

        while (inputCount--) {
            int currentQuery;
            cin >> currentQuery;

            switch (currentQuery) {
                case 1:
                    int value;
                    cin >> value;
                    inputList.push_back(value);
                    printList(inputList, output);
                    break;
                case 2:
                    inputList.sort();
                    printList(inputList, output);
                    break;
                case 3:
                    inputList.reverse();
                    printList(inputList, output);
                    break;
                case 4:
                    output << inputList.size() << endl;
                    break;
                case 5:
                    printList(inputList, output);
                    break;
                case 6:
                    if (!inputList.empty()) {
                        inputList.pop_back();
                    }
                    printList(inputList, output);
                    break;
                case 7:
                    if (!inputList.empty()) {
                        inputList.pop_front();
                    }
                    printList(inputList, output);
                    break;
                case 8:
                    int value2;
                    cin >> value2;
                    inputList.push_front(value2);
                    printList(inputList, output);
                    break;
                    
            }
        }
    }

    cout << output.str();

    return 0;
}