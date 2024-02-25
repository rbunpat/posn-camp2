#include <iostream>

using namespace std;


//using long long cuz the number is hugeeeeeeeeeeee as fuck
long long int getAnswer(long long int n) {
    return n * (n + 1);
}

int main() {
    long long int n;

    cin >> n;

    long long int result = getAnswer(n);

    cout << result;

    return 0;
}
