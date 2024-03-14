#include <bits/stdc++.h>

using namespace std;

unordered_map<string, unsigned long long int> unorderedMap;
unsigned long long int bruh[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long int n, m;
    unsigned long long int max = 0;
    unsigned long long int min = 0;

    vector<unsigned long long int> lmao;

    string inputString;

    stringstream output;

    cin >> n;
    cin >> m;

    for (unsigned long long int i = 0; i < n; i++) {
        cin >> bruh[i];
    }

    sort(bruh, bruh + n);

    while (m--)
    {
        cin >> inputString;

        if (unorderedMap.count(inputString)) {

            lmao[unorderedMap[inputString]]++;

        } else {

            unorderedMap[inputString] = unorderedMap.size();
            lmao.emplace_back(1);

        }
    }

    sort(lmao.begin(), lmao.end(), greater<unsigned long long int>());

    for (unsigned long long int i = 0; i < lmao.size(); i++) {
        min += lmao[i] * bruh[i];
        max += lmao[i] * bruh[n - 1 - i];
    }

    output << min << " " << max;

    cout << output.str();

    return 0;
}
