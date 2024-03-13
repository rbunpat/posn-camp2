#include <bits/stdc++.h>
#include <sstream>

using namespace std;

stringstream output;

void show(int data) {
  if (data > 0) {
    show(data/3);
    cout << data % 3 << ' ';
    }
}

int main() {
  
  //stringstream output;
  
  int n, i;

  cin >> n;

  for (i = 0; i < n; i++) {
    int data;
    cin >> data;
    show(data);
  }

  //cout << output.str();

  return 0;
}
