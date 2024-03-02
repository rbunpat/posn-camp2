#include <bits/stdc++.h>

using namespace std;

int main() {
    int bookCount, borrowCount;
    cin >> bookCount;

    vector<int> books(bookCount);

    cin >> borrowCount;

    vector<int> borrowedBookPositions(borrowCount);

    for (int i = 0; i < bookCount; i++) {
        cin >> borrowedBookPositions[i];
    }

    sort(borrowedBookPositions.begin(), borrowedBookPositions.end());

    vector<int> borrowedBooks;

    for (int i = 0; i < bookCount; ++i) {
        for (int j = 0; j < borrowCount; ++j) {
            if (books[i] == borrowedBookPositions[j]) {
                borrowedBooks.push_back(i + 1);
                break;
            }
        }
    }

    cout << borrowedBooks.size() << endl;

    for (auto i: borrowedBooks) {
        cout << i << endl;
    }



    return 0;
}