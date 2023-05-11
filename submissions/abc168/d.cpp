#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  Graph G;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<bool> seen(N, false);
  vector<int> a(N + 1, 0);
  queue<int> q;
  q.push(1);
  while (!q.empty()) {
    int x;
    x = q.front();
    q.pop();
    if (seen[x])
      continue;
    seen[x] = true;
    for (auto v : G[x]) {
      q.push(v);
      if (a[v] == 0)
        a[v] = x;
    }
  }
  for (int i = 1; i <= N; i++) {
    if (seen[i] == false) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (int i = 2; i <= N; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
