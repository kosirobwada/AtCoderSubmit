#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main() {
  int N, M, R;
  cin >> N >> M >> R;
  ll ans = INF;
  vector<int> r(R);
  for (int i = 0; i < R; i++) {
    cin >> r[i];
    r[i]--;
  }
  vector<vector<ll>> dist(N, vector<ll>(N, INF));
  for (int i = 0; i < N; i++) {
    dist[i][i] = 0;
  }
  for (int i = 0; i < M; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    dist[a][b] = c;
    dist[b][a] = c;
  }
  for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
  sort(r.begin(), r.end());
  do {
    ll sum = 0;
    for (int i = 0; i < R - 1; i++) {
      sum += dist[r[i]][r[i + 1]];
    }
    ans = min(ans, sum);
  } while (next_permutation(r.begin(), r.end()));
  cout << ans << endl;
  return 0;
}
