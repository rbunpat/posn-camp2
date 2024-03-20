#include <bits/stdc++.h>

using namespace std;

bool isValidString(const string &str) {
  int balance = 0;
  for (char ch : str) {
    if (ch == 'I') {
      balance++;
    } else {
      if (balance == 0) {
        return false;
      }
      balance--;
    }
  }
  return balance == 0;
}

int main() {
  ios::base sync_with_stdio(0);

  cin.tie(0);
  cout.tie(0);
  int testCases;
  cin >> testCases;

  for (int i = 0; i < testCases; i++) {
    string input;
    cin >> input;

    if (isValidString(input)) {
      cout << "Y" << endl;
    } else {
      cout << "N" << endl;
    }
  }

  return 0;
}
