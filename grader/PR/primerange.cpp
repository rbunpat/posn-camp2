#include <iostream>
#include <sstream>
using namespace std;

bool checkPrime(int n) {
  int i;
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main() {



  stringstream output;

  int start, end;
  cin >> start >> end;

  int primeCount = 0;

  for (int i = start; i < end; i++) {
    int num;
    num = i;
    if (checkPrime(num)) {
      primeCount++;
    }
  }

  cout << primeCount;

  // int i, n;
  // bool is_prime = true;

  // cin >> n;

  // // 0 and 1 are not prime numbers
  // if (n == 0 || n == 1) {
  //   is_prime = false;
  // }

  // // loop to check if n is prime
  // for (i = 2; i <= n/2; ++i) {
  //   if (n % i == 0) {
  //     is_prime = false;
  //     break;
  //   }
  // }

  // if (is_prime)
  //   cout << "Prime Number";
  // else
  //   cout << "No";

  return 0;
}