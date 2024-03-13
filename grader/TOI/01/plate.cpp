#include <bits/stdc++.h>
using namespace std;

int main() {
    int numClasses, numEntries;
    cin >> numClasses >> numEntries;

    unordered_map<int, int> studentClassMap;
    queue<int> classQueues[numClasses + 1];
    queue<int> outputQueue;


    for(int i = 0; i < numEntries; i++) {
        int classId, studentId;
        cin >> classId >> studentId;
        studentClassMap[studentId] = classId;
    }

    char command = ' ';
    while(command != 'X') {
        cin >> command;
        if(command == 'E') {
            int studentId;
            cin >> studentId;
            int classId = studentClassMap[studentId];
            classQueues[classId].push(studentId);
        }
        else if(command == 'D') {
            int currentClass = 1;
            while(classQueues[currentClass].empty()) currentClass++;
            int studentId = classQueues[currentClass].front();
            classQueues[currentClass].pop();
            outputQueue.push(studentId);
        }
    }


    while(!outputQueue.empty()) {
        cout << outputQueue.front() << " ";
        outputQueue.pop();
    }

    cout << endl << "0";
    return 0;
}
