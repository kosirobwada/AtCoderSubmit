#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> C(H);
  for (int i = 0; i < H; i++) {
    cin >> C[i];
  }
  queue<P> q;
  q.push({0, 0});
  vector<vector<int>> dis(H + 1, vector<int>(W + 1, -1));
  dis[0][0] = 1;
  int ans = 1;
  while (!q.empty()) {
    P p;
    p = q.front();
    q.pop();
    int x, y;
    x = p.first;
    y = p.second;
    if (x + 1 < H && C[x + 1][y] == '.') {
      if (dis[x + 1][y] == -1) {
        q.push({x + 1, y});
        int z = dis[x][y] + 1;
        dis[x + 1][y] = z;
        if (z > ans)
          ans = z;
      }
    }
    if (y + 1 < W && C[x][y + 1] == '.') {
      if (dis[x][y + 1] == -1) {
        q.push({x, y + 1});
        int z = dis[x][y] + 1;
        dis[x][y + 1] = z;
        if (z > ans)
          ans = z;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
