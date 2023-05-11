#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
ll dp[110][101010];
int main() {
  int N, W;
  cin >> N >> W;
  vector<int> w(N), v(N);
  rep(i, 0, N) cin >> w[i] >> v[i];
  rep(i, 0, N) rep(j, 0, W) dp[i][j] = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j - w[i] >= 0) {
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[N][W] << endl;
  return 0;
}
