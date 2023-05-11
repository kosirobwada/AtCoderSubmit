#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main() {
  string S;
  cin >> S;
  int N = S.size();
  vector<vector<int>> dp(N + 1, vector<int>(13, 0));
  if (S[0] == '?') {
    for (int i = 0; i < 10; i++) {
      dp[0][i] = 1;
    }
  } else {
    int x = S[0] - '0';
    dp[0][x] = 1;
  }
  for (int i = 1; i < N; i++) {
    if (S[i] == '?') {
      for (int j = 0; j < 13; j++) {
        for (int k = 0; k < 10; k++) {
          int x = j * 10 + k;
          x %= 13;
          dp[i][x] += dp[i - 1][j];
          dp[i][x] %= mod;
        }
      }
    } else {
      for (int j = 0; j < 13; j++) {
        if (dp[i - 1][j]) {
          int x = j * 10 + (S[i] - '0');
          x %= 13;
          dp[i][x] = dp[i - 1][j];
        }
      }
    }
  }
  cout << dp[N - 1][5] % mod << endl;
  return 0;
}
