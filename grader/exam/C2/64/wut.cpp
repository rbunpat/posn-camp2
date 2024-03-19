#include <bits/stdc++.h>

using namespace std;


int n, m;
int graph[101][101];

bool visited[101][101];

bool isValid(int x, int y) {
  if (x < 0 || y < 0 || x >= m || y >= n) {
    return false;
  } else {
    return true;
  }

  //return true;
}

void bfs(int curX, int curY) {
  queue<pair<int, int>> q;
  q.push(make_pair(curX, curY));
  visited[curX][curY] = true;

  while (!q.emtpy()) {
    int x = q.front().first;
    int y = q.front().second;

    q.pop();

    cout << graph[x][y] << " ";
    
    int dx = {1, 0, -1, 0};
    int dy = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++) {
      if (isValid(x + dx[i], y + dy[i])) {
        q.push(make_pair(x + dx[i]))
      } 

    }



  }

  }


int main() {

  memset(visited, 0, sizeof(visited));

  

  return 0;


}
