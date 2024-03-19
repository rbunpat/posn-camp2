// #include <bits/stdc++.h>

// using namespace std;

// bool canConnect(vector<pair<int, int>> connectionList, int computerA, int computerB, int computerCount) {
//     vector<vector<int>> adjList(computerCount + 1);

//     for (const auto& connection : connectionList) {
//         int computer1 = connection.first;
//         int computer2 = connection.second;
//         adjList[computer1].push_back(computer2);
//         adjList[computer2].push_back(computer1);
//     }

//     vector<bool> visited(computerCount + 1, false);

//     function<bool(int, int)> dfs = [&](int curr, int target) {
//         if (curr == target) {
//             return true;
//         }
//         visited[curr] = true;
//         for (int neighbor : adjList[curr]) {
//             if (!visited[neighbor] && dfs(neighbor, target)) {
//                 return true;
//             }
//         }
//         return false;
//     };

//     return dfs(computerA, computerB);
// }

// int main() {
//     stringstream ss;

//     int computerCount, cableCount, tests;
//     int comA, comB;

//     cin >> computerCount;
//     cin >> cableCount;
//     cin >> tests;

//     vector<pair<int, int>> connectionList;

//     for (int i = 0; i < cableCount; i++) {
//         int a, b;
//         cin >> a;
//         cin >> b;
//         connectionList.push_back(make_pair(a, b));
//     }

    
//     for (int i = 0; i < tests; i++) {
//         cin >> comA;
//         cin >> comB;

//         if (canConnect(connectionList, comA, comB, computerCount)) {
//             ss << "Yes" << endl;
//         } else {
//             ss << "No" << endl;
//         }
//     }

//     cout << ss.str();
    



//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int n, m, q;

bool canConnect = false;

void addEdge(vector<int> graph[], int u, int v) {
    graph[u].push_back(v);
}


void dfs(vector<int> graph[], int tx, int rx, bool visited[]) {

    visited[tx] = true;

    if (canConnect) {
        return;
    }

    for (auto node: graph[tx]) {
        if (visited[node] == false) {
            visited[node] = true;
            if (node == rx) {
                canConnect = true;
                return;
            }
            dfs(graph, node, rx, visited);
        }
    }
}
    
void solve(vector<int> graph[], int tx, int rx) {
    bool visited[n + 1];

    memset(visited, 0, sizeof(visited));
    canConnect = false;

    dfs(graph, tx, rx, visited);

    if (canConnect) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}

int main() {
    cin >> n;
    cin >> m;
    cin >> q;

    vector<int> graph[n + 1];

    int a, b;
    
    for (int i = 0; i < m; i++) {
        cin >> a;
        cin >> b;

        addEdge(graph, a, b);
    }

    while(q--){
        int tx, rx;
        cin >> tx;
        cin >> rx;

        solve(graph, tx, rx);
    }
    return 0;
}