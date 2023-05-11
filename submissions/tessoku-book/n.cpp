#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  map<int, vector<int>> G;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  queue<int> q;
  q.push(0);
  vector<int> dist(N, -1);
  dist[0] = 0;
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (auto v : G[x]) {
      if (dist[v] == -1) {
        q.push(v);
        dist[v] = dist[x] + 1;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    cout << dist[i] << endl;
  }
  return 0;
}
