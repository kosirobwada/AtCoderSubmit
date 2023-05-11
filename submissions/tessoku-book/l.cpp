#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
using P = pair<int, int>;
struct edge {
  int to;
  int cost;
};
int N, M;
vector<int> dijkstra(map<int, vector<edge>> G, int st) {
  vector<int> dist(N, INF);
  vector<bool> vis(N, false);
  priority_queue<P, vector<P>, greater<P>> q;
  dist[0] = 0;
  q.push({0, 0});
  while (!q.empty()) {
    P p = q.top();
    q.pop();
    int d, v;
    d = p.first;
    v = p.second;
    if (vis[v])
      continue;
    vis[v] = true;
    for (edge x : G[v]) {
      if (dist[x.to] > dist[v] + x.cost) {
        dist[x.to] = dist[v] + x.cost;
        q.push({dist[x.to], x.to});
      }
    }
  }
  return dist;
}
int main() {
  map<int, vector<edge>> G;
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    G[a].push_back({b, c});
    G[b].push_back({a, c});
  }
  vector<int> d = dijkstra(G, 0);
  for (int i = 0; i < N; i++) {
    if (d[i] == INF)
      cout << -1 << endl;
    else
      cout << d[i] << endl;
  }
  return 0;
}
