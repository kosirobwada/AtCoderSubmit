#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e7 + 9;
string N;
long long dp[11][2][11];
int main() {
  string N;
  cin >> N;
  int n = N.size();
  dp[0][0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      dp[i + 1][1][j] += dp[i][1][j] * 9;
      dp[i + 1][1][j + 1] += dp[i][1][j];
      int ni = (N[i] - '0');
      if (ni > 1) {
        dp[i + 1][1][j] += dp[i][0][j] * (ni - 1);
        dp[i + 1][1][j + 1] += dp[i][0][j];
      } else if (ni == 1) {
        dp[i + 1][1][j] += dp[i][0][j];
      }
      if (ni == 1) {
        dp[i + 1][0][j + 1] = dp[i][0][j];
      } else {
        dp[i + 1][0][j] = dp[i][0][j];
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i < 10; i++) {
    ans += i * (dp[n][0][i] + dp[n][1][i]);
  }
  cout << ans << endl;
}
