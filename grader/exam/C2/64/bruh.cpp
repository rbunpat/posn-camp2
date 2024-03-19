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
    

    if(isValid(x + 1, y)) {
      q.push(make_pair(x + 1, y));
      visited[x + 1][y] = true;
  ``  }

    if (isValid(x, y + 1)) {
      q.push(make_pair(x + 1, y));
      visited[x][y + 1] = true;
    }

    if (isValid(x - 1, y)) {
      q.push(make_pair(x - 1, y));
      visited[x - 1][y] = true;

    } 

    if (isValid(x, y - 1)) {
      q.push(make_pair(x, y - 1));
      visited[x][y - 1] = true;
    } 




    }

  }


int main() {

  memset(visited, 0, sizeof(visited));

  

  return 0;


}
