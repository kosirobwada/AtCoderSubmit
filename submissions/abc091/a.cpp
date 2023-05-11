#include <atcoder/maxflow>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N), c(N), d(N);
  mf_graph<int> G(2 * N + 2);
  for (int i = 0; i < N; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }
  for (int i = 0; i < N; i++) {
    cin >> c[i] >> d[i];
    c[i]--;
    d[i]--;
  }
  for (int i = 0; i < N; i++) {
    G.add_edge(2 * N, i, 1);
    G.add_edge(N + i, 2 * N + 1, 1);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (a[i] < c[j] && b[i] < d[j])
        G.add_edge(i, N + j, 1);
    }
  }
  cout << G.flow(2 * N, 2 * N + 1) << endl;
  return 0;
}
