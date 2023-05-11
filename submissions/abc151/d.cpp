#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
  int H, W;
  cin >> H >> W;
  set<P> st;
  vector<vector<char>> S(H + 1, vector<char>(W + 1));
  rep(i, 0, H) rep(j, 0, W) {
    cin >> S[i][j];
    if (S[i][j] == '.')
      st.insert({i, j});
  }
  int M = 0;
  for (auto v : st) {
    vector<vector<int>> dis(H + 1, vector<int>(W + 1, -1));
    queue<P> q;
    int sx = v.first;
    int sy = v.second;
    q.push({sx, sy});
    dis[sx][sy] = 0;
    while (!q.empty()) {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= H || ny >= W || dis[nx][ny] != -1 ||
            S[nx][ny] == '#')
          continue;
        q.push({nx, ny});
        dis[nx][ny] = dis[x][y] + 1;
      }
    }
    int m = 0;
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        chmax(m, dis[i][j]);
      }
    }
    chmax(M, m);
  }
  cout << M << endl;
  return 0;
}
