#include "bits/stdc++.h"
// #include "atcoder/all"
using namespace std;
// using namespace atcoder;
// using mint = modint1000000007;
#define endl "\n"

int main() {
  int N, W, C;
  cin >> N >> W >> C;
  vector<int> w(N);
  vector<int> v(N);
  vector<int> c(N);
  for (int i = 0; i < N; ++i) {
    cin >> w[i] >> v[i] >> c[i];
  }
  vector<vector<int>> dp(C + 1, vector<int>(W + 1));
  for (int i = 0; i <= 50; ++i) {
    // Fi‚ð‘‚â‚·
    vector<vector<int>> subdp(C + 1, vector<int>(W + 1));
    for (int j = 1; j < C; ++j) {
      subdp[j + 1] = dp[j];
    }
    for (int j = 0; j < N; ++j) {
      if (i != c[j]) {
        continue;
      }
      for (int k = 1; k <= C; ++k) {
        for (int l = W - w[j]; l >= 0; --l) {
          subdp[k][l + w[j]] = max(subdp[k][l + w[j]], subdp[k][l] + v[j]);
        }
      }
    }
    for (int j = 0; j <= C; ++j) {
      for (int k = 0; k <= W; ++k) {
        dp[j][k] = max(dp[j][k], subdp[j][k]);
      }
    }
  }
  cout << dp[C][W] << endl;
  return 0;
}
