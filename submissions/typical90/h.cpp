#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  long long mod = 1000000007;
  vector<vector<long long>> dp(N + 100, vector<long long>(10, 0));
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      if (S[i] == 'a') {
        dp[i][0] = 1;
      }
      continue;
    } else {
      for (int j = 0; j < 7; j++) {
        dp[i][j] = dp[i - 1][j];
      }
    }
    if (S[i] == 'a')
      dp[i][0] = (dp[i - 1][0] + 1) % mod;
    else if (S[i] == 't')
      dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    else if (S[i] == 'c')
      dp[i][2] = (dp[i - 1][1] + dp[i - 1][2]) % mod;
    else if (S[i] == 'o')
      dp[i][3] = (dp[i - 1][2] + dp[i - 1][3]) % mod;
    else if (S[i] == 'd')
      dp[i][4] = (dp[i - 1][3] + dp[i - 1][4]) % mod;
    else if (S[i] == 'e')
      dp[i][5] = (dp[i - 1][4] + dp[i - 1][5]) % mod;
    else if (S[i] == 'r')
      dp[i][6] = (dp[i - 1][5] + dp[i - 1][6]) % mod;
    /*for(int j=0; j<7; j++){
        cout << dp[i][j] << ' ';
    }
    cout << endl;*/
  }
  cout << dp[N - 1][6] << endl;
  return 0;
}
