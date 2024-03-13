#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long int sum = 0;

    for (long long int i = 1; i <= n; ++i) {
        long long int partialSum = 0;

        for (long long int j = 1; j <= i; ++j) {

            partialSum += 2 * j;

        }

        sum += partialSum;
    }

    cout << sum << endl;

    return 0;
}
