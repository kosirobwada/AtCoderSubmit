#include <bits/stdc++.h>
using namespace std;
long long dp[55][55][3030];
int main() {
  int N, A;
  cin >> N >> A;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < 3030; k++) {
        dp[i][j][k] = 0;
      }
    }
  }
  dp[0][0][0] = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < 3000; k++) {
        if (dp[i][j][k]) {
          dp[i + 1][j][k] += dp[i][j][k];
          dp[i + 1][j + 1][k + a[i]] += dp[i][j][k];
        }
      }
    }
  }
  long long ans = 0;
  for (int i = 1; i <= N; i++) {
    ans += dp[N][i][i * A];
  }
  cout << ans << endl;
  return 0;
}
