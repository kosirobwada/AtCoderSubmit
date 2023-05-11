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
struct TopologicalSort {
  vector<vector<int>> E;
  TopologicalSort(int N) { E.resize(N); }
  void add_edge(int a, int b) { E[a].push_back(b); }
  bool visit(int v, vector<int> &order, vector<int> &color) {
    color[v] = 1;
    for (int u : E[v]) {
      if (color[u] == 2)
        continue;
      if (color[u] == 1)
        return false;
      if (!visit(u, order, color))
        return false;
    }
    order.push_back(v);
    color[v] = 2;
    return true;
  }
  bool sort(vector<int> &order) {
    int n = E.size();
    vector<int> color(n);
    for (int u = 0; u < n; u++)
      if (!color[u] && !visit(u, order, color))
        return false;
    reverse(order.begin(), order.end());
    return true;
  }
};
int dp[101010];
int main() {
  int N, M;
  cin >> N >> M;
  Graph G;
  TopologicalSort ts(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].pb(b);
    ts.add_edge(a, b);
  }
  vector<int> x;
  ts.sort(x);
  for (auto v : x) {
    for (auto u : G[v]) {
      chmax(dp[u], dp[v] + 1);
    }
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    chmax(ans, dp[i]);
  }
  cout << ans << endl;
  return 0;
}
