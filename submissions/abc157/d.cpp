#include <atcoder/dsu>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
int main() {
  int N, M, K;
  cin >> N >> M >> K;
  dsu uf(N);
  map<int, vector<int>> G;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
    uf.merge(a, b);
  }
  for (int i = 0; i < K; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (uf.same(a, b)) {
      G[a].push_back(b);
      G[b].push_back(a);
    }
  }
  for (int i = 0; i < N; i++) {
    int cnt = 0;
    cnt += uf.size(i);
    cnt -= G[i].size();
    cout << cnt - 1 << ' ';
  }
  cout << endl;
  return 0;
}
