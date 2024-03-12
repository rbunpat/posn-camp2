#include <bits/stdc++.h>
using namespace std;

float closest(Point P[], int n) {
  qsort(P, n, sizeof(Point), compareX);
  return closestUtil(P, n);
}

int main() {

  Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}};
  int n = sizeof(P) / sizeof (P[0]);
  cout << "The smallest distance is " << closest(P, n);

  return 0;
}
