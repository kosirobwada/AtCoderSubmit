#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  int H, W;
  cin >> H >> W;
  int cnt = 0;
  vector<vector<char>> s(H + 1, vector<char>(W + 1));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> s[i][j];
      if (s[i][j] == '#')
        cnt++;
    }
  }
  queue<P> q;
  q.push({1, 1});
  vector<vector<int>> dis(H + 1, vector<int>(W + 1, -1));
  dis[1][1] = 0;
  while (!q.empty()) {
    P z;
    z = q.front();
    q.pop();
    int x, y;
    x = z.first;
    y = z.second;
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 1 || ny < 1 || nx > H || ny > W)
        continue;
      if (s[nx][ny] == '#')
        continue;
      if (dis[nx][ny] == -1) {
        dis[nx][ny] = dis[x][y] + 1;
        q.push({nx, ny});
      }
    }
  }
  if (dis[H][W] == -1)
    cout << -1 << endl;
  else
    cout << H * W - dis[H][W] - cnt - 1 << endl;
  return 0;
}
