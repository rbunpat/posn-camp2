#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int personCount;
    cin >> personCount;

    long long int minPrice = INT_MAX;

    long long int singleRoomCount = (personCount + 1 - 1) / 1;
    long long int doubleRoomCount = (personCount + 2 - 1) / 2;
    long long int centralRoomCount = (personCount + 5 - 1) / 5;
    long long int combinedRoomCount = (personCount + 15 - 1) / 15;

    long long int totalPriceSingle = singleRoomCount * 500;
    long long int totalPriceDouble = doubleRoomCount * 800;
    long long int totalPriceCentral = centralRoomCount * 1500;
    long long int totalPriceCombined = combinedRoomCount * 3000;

    if (totalPriceSingle < minPrice) {
        minPrice = totalPriceSingle;
    }
    if (totalPriceDouble < minPrice) {
        minPrice = totalPriceDouble;
    }
    if (totalPriceCentral < minPrice) {
        minPrice = totalPriceCentral;
    }
    if (totalPriceCombined < minPrice) {
        minPrice = totalPriceCombined;
    }

    cout << minPrice;

    return 0;
}