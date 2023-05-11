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
void warshall_floyd(vector<vector<int>> &dist) {
  int V = dist.size();
  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
}
int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> c(10, vector<int>(10));
  rep(i, 0, 10) rep(j, 0, 10) cin >> c[i][j];
  vector<vector<int>> a(H, vector<int>(W));
  rep(i, 0, H) rep(j, 0, W) cin >> a[i][j];
  warshall_floyd(c);
  /*rep(i,0,10){
      rep(j,0,10)cout << c[i][j] << ' ';
      cout << endl;
  }*/
  vector<int> dis(10);
  rep(i, 0, 10) dis[i] = c[i][1];
  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (a[i][j] == -1)
        continue;
      ans += dis[a[i][j]];
    }
  }
  cout << ans << endl;
  return 0;
}
