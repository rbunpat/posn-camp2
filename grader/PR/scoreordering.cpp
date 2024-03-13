#include <bits/stdc++.h>

using namespace std;

struct Student {
    string name;
    int score;
};

int sortStudents(const Student &a, const Student &b) {
    if (a.score == b.score) {
        //if score is the same, sort by alphabetical order
        return a.name < b.name; 
    }
    //else sort the score in desc oredr
    return a.score > b.score;
}

int main() {
    int studentCount, outputCount;

    cin >> studentCount >> outputCount;

    vector<Student> students(studentCount);

    for (int i = 0; i < studentCount; i++) {
        cin >> students[i].name >> students[i].score;
    }

    sort(students.begin(), students.end(), sortStudents);

    for (int i = 0; i < outputCount; i++) {
        cout << students[i].name << " " << students[i].score << endl;
    }

    return 0;
}