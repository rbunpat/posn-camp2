#include <bits/stdc++.h>

using namespace std;


int n, m;

vector<int> graph[5001];

bool visited[5001];

int computers;

void dfs(int src) {
  computers++;

  visited[src] = true;

  for (auto node: graph[src]) {
    if (!visited[node]) {
      dfs(node);
    }
    //dfs(node);
  }
  
}

int main() {
  cin >> n;
  cin >> m;

  int a, b;

  for (int i = 0; i < m; i++) {
    cin >> a;
    cin >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);

  }

  memset(visited, 0, sizeof(visited));

  int networks = 0;
  int max_computers = INT_MIN;

  for (int i = 0; i < n; i++) {

    computers = 0;

    if (visited[i] == false) {
      dfs(i);
      networks++;
    }
    max_computers = max(max_computers, computers);
  }
  cout << networks << endl;
  cout << max_computers;
}

