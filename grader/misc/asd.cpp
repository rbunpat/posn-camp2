#include <bits/stdc++.h>

using namespace std;

long long int getPower(long long int number) {
    return (number * number);
}

int main() {
    long long int input = 0;
    long long int i = 1;
    long long int answerCount = 0;
    cin >> input;

    while (true) {
        if (getPower(i) < input) {
            answerCount++;
        } else if (getPower(i) >= input) {
            break;
        }
        i++;

    }

    cout << answerCount;
    //cpu usage go brrrrrrrrr



    return 0;
}