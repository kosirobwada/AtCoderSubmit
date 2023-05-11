#include <atcoder/dsu>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
int main() {
  int N, Q;
  cin >> N >> Q;
  map<int, set<int>> G;
  for (int i = 0; i < Q; i++) {
    int t, a, b;
    cin >> t >> a >> b;
    a--;
    b--;
    if (t == 1) {
      if (G[a].count(b)) {
        G[a].erase(b);
        G[b].erase(a);
      } else {
        G[a].insert(b);
        G[b].insert(a);
      }
    }
    if (t == 2) {
      dsu uf(N);
      for (int i = 0; i < N; i++) {
        for (auto v : G[i]) {
          uf.merge(v, i);
        }
      }
      if (uf.same(a, b))
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }
  return 0;
}
