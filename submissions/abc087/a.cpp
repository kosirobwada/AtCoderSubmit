#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<vector<int>> a(2, vector<int>(N));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> dp(2, vector<int>(N, 0));
  dp[0][0] = a[0][0];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      if (i + 1 < 2) {
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + a[i + 1][j]);
      }
      if (j + 1 < N) {
        dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + a[i][j + 1]);
      }
    }
  }
  cout << dp[1][N - 1] << endl;
  return 0;
}
