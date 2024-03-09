#include <bits/stdc++.h>

using namespace std;

int findgcd(int a, int b) {
  if (b == 0) return a; else return findgcd(b, a % b);
}

int main() {
  
  int n, i, data, gcd, lcm;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> data;

    if (i = 0) gcd = lcm = data; else {
      gcd = findgcd(data, gcd);
      lcm = lcm * data / findgcd(lcm, data);
    }
  }

  cout << "LCM Is " << lcm;

  return 0;
}
