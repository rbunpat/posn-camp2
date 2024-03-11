#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  stringstream output;

  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;

    int bruh = 0;
  
    int digitCount = to_string(n).length();

    // cout << digitCount << endl;

    for (int j = 0; j < digitCount; j++) {
      int currentDigit = to_string(n)[j] - '0';
      // cout << to_string(n)[j] << endl;
      // cout << to_string(n)[j] - '0' << endl;
      // cout << "Current digit: " << currentDigit << endl;
      int power = pow(currentDigit, j + 1);
      // cout << currentDigit << "^" << j + 1 << " = " << power << endl;
      bruh += power;
    }

    // cout << bruh << endl;
    // cout << n << endl;

    if (bruh == n) {
      output << "Y";
    } else {
      output << "N";
    }

  }

  cout << output.str();
  return 0;
}
