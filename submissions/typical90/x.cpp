#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;
int main() {
  int N, L;
  cin >> N >> L;
  int mod = 1e9 + 7;
  vector<int> dp(N + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < 100100; i++) {
    if (i + 1 > N + 1)
      continue;
    dp[i + 1] += (dp[i] % mod);
    dp[i + 1] %= mod;
    if (i + L > N + 1)
      continue;
    dp[i + L] += (dp[i] % mod);
    dp[i + L] %= mod;
  }
  cout << dp[N] << endl;
  return 0;
}
