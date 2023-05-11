#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, W;
ll w[109], v[109];
ll dp[109][100009];
int main() {
  cin >> n >> W;
  for (int i = 1; i <= n; i++)
    cin >> w[i] >> v[i];

  dp[0][0] = 0;
  for (int j = 1; j <= W; j++)
    dp[0][j] = -10000000LL;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      if (j < w[i])
        dp[i][j] = dp[i - 1][j];
      else {
        dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
      }
    }
  }
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      ans = max(ans, dp[i][j]);
    }
  }
  cout << ans << endl;
  return 0;
}
