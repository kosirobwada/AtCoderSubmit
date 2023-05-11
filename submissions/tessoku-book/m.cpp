#include <bits/stdc++.h>
using namespace std;
int N, M;
map<int, vector<int>> G;
vector<bool> seen;
void dfs(int x) {
  seen[x] = true;
  for (auto v : G[x]) {
    if (seen[v])
      continue;
    dfs(v);
  }
  return;
}
int main() {
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  seen.assign(N, false);
  dfs(0);
  bool flag = true;
  for (int i = 0; i < N; i++) {
    if (seen[i] == false)
      flag = false;
  }
  if (flag)
    cout << "The graph is connected." << endl;
  else
    cout << "The graph is not connected." << endl;
  return 0;
}
