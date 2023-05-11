#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int y = 0;
    for (auto v : G[i]) {
      if (v < i)
        y++;
    }
    if (y == 1)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}
