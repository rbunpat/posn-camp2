#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<pair<int, int>> g[], int u, int v, int w) {
  g[u].push_back(make_pair(v, w));
  g[v].push_back(make_pair(u, w));
}

void dijkstra(vector<pair<int, int>> g[], int src, int v) {

  
  vector<int> dist(v, INT_MAX); 
  vector<bool> visited(v, false);





}

int main (int argc, char *argv[]) {
  int v = 9;
  vector<pair<int, int>> g[v];

  addEdge(g, 0, 1, 4);
  addEdge(g, 0, 7, 8);
  addEdge(g, 1, 2, 8);
  addEdge(g, 1, 7, 11);
  addEdge(g, 2, 3, 7);
  addEdge(g, 2, 8, 2);
  addEdge(g, 2, 5, 4);
  addEdge(g, 3, 4, 9);
  addEdge(g, 3, 5, 14);
  addEdge(g, 4, 5, 10);
  addEdge(g, 5, 6, 2);
  addEdge(g, 6, 7, 1);
  addEdge(g, 6, 8, 6);
  addEdge(g, 7, 8, 7);

  dijkstra(g, 0, v);
  return 0;
}
