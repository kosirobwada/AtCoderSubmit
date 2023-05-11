#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
  int N, M, Q, K;
  cin >> N >> M >> Q >> K;
  vector<int> a(K);
  for (int i = 0; i < K; i++) {
    cin >> a[i];
    a[i]--;
  }
  map<int, vector<int>> G;
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<vector<int>> dis(K, vector<int>(N, INF));
  for (int i = 0; i < K; i++) {
    dis[i][a[i]] = 0;
    queue<int> q;
    q.push(a[i]);
    while (!q.empty()) {
      int x = q.front();
      q.pop();
      for (auto v : G[x]) {
        if (dis[i][v] <= dis[i][x] + 1)
          continue;
        dis[i][v] = dis[i][x] + 1;
        q.push(v);
      }
    }
  }
  for (int i = 0; i < Q; i++) {
    int s, t;
    cin >> s >> t;
    s--;
    t--;
    int m = INF;
    for (int j = 0; j < K; j++) {
      m = min(m, dis[j][s] + dis[j][t]);
      // cout << dis[j][s]+dis[j][t] << ' ';
    }
    cout << m << endl;
  }
  return 0;
}
