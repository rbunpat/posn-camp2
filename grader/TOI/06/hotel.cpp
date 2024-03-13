#include <bits/stdc++.h>

using namespace std;

int main() {

  int personCount, totalPrice = 0; 

  cin >> personCount;

  while (personCount > 0) {
    if (personCount >= 15) {
      totalPrice += 3000;
      personCount -= 15;
    }

    else if (personCount >= 5) {
      totalPrice += 1500;
      personCount -= 5;
      //break;
    }

    else if (personCount >= 2) {
      totalPrice += 800;
      personCount -= 2;
      //break;
    }

    else if (personCount = 1) {
      totalPrice += 500;
      personCount -= 1;
      //break;
    }
  }

  cout << totalPrice;
  return 0;
}
