#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
  int N;
  cin >> N;
  vector<vector<int>> a(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  int M;
  cin >> M;
  vector<vector<bool>> uwasa(N, vector<bool>(N, false));
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    uwasa[a][b] = true;
    uwasa[b][a] = true;
  }
  int ans = INF;
  vector<int> v(N);
  rep(i, 0, N) v[i] = i;
  do {
    int sum = 0;
    bool flag = true;
    for (int i = 0; i < N - 1; i++) {
      if (uwasa[v[i + 1]][v[i]] == true)
        flag = false;
    }
    for (int i = 0; i < N; i++) {
      sum += a[v[i]][i];
    }
    if (flag)
      ans = min(ans, sum);
  } while (next_permutation(all(v)));
  if (ans != INF)
    cout << ans << endl;
  else
    cout << -1 << endl;
  return 0;
}
