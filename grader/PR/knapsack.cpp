#include <bits/stdc++.h>

using namespace std;

struct Item {
    int value;
    int weight;
};


int main() {
    stringstream output;
    int testCasesCount;
    cin >> testCasesCount;

    for (int i = 0; i < testCasesCount; i++) {
        int itemCount, maxWeight;
        cin >> itemCount >> maxWeight;

        vector<Item> items(itemCount);

        for (int j = 0; j < itemCount; j++) {
            cin >> items[j].value >> items[j].weight;
        }

        sort(items.begin(), items.end(), [](const Item &a, const Item &b) {
            return (a.value * 1.0 / a.weight) > (b.value * 1.0 / b.weight);
        });


        float totalValue = 0;

        for (int i = 0; i < itemCount && maxWeight > 0; ++i) {
            if (items[i].weight <= maxWeight) {
                totalValue += items[i].value;
                maxWeight -= items[i].weight;
            } else {
                totalValue += (items[i].value * 1.0 / items[i].weight) * maxWeight;
                maxWeight = 0;
            }
        }


        output << fixed << setprecision(2) << totalValue << endl;
        
    }

    cout << output.str();

    return 0;
}