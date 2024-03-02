#include <bits/stdc++.h>

using namespace std;

int findGcd(int number1, int number2) {
    int gcdanswer = 1;
    for (int i = 1; i <= number1 && i <= number2; ++i) {
        if (number1 % i == 0 && number2 % i == 0) {
            gcdanswer = i;
        }
    }
  return gcdanswer;
}

int main() {
    int answer = 0;

    int input;
    cin >> input;

    for (int i = 1; i < input; ++i) {
      for (int j = i + 1; j <= input; ++j) {
        answer += findGcd(i, j);
      }
    }

    cout << answer << endl;

  

    return 0;
}
