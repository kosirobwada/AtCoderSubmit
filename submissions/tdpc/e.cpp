#include <bits/stdc++.h>
#define int long long
using namespace std;
using ld = long double;
int N, D;
ld dp[100][75][55][35];
signed main() {
  cin >> N >> D;
  int a = 0, b = 0, c = 0;
  while (D % 2 == 0)
    a++, D /= 2;
  while (D % 3 == 0)
    b++, D /= 3;
  while (D % 5 == 0)
    c++, D /= 5;
  if (D != 1)
    return puts("0"), 0;
  dp[0][0][0][0] = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 70; j++)
      for (int k = 0; k < 50; k++)
        for (int l = 0; l < 30; l++) {
          dp[i + 1][j][k][l] += dp[i][j][k][l];
          dp[i + 1][min(j + 1, a)][k][l] += dp[i][j][k][l];
          dp[i + 1][j][min(k + 1, b)][l] += dp[i][j][k][l];
          dp[i + 1][min(j + 2, a)][k][l] += dp[i][j][k][l];
          dp[i + 1][j][k][min(l + 1, c)] += dp[i][j][k][l];
          dp[i + 1][min(j + 1, a)][min(k + 1, b)][l] += dp[i][j][k][l];
        }
    for (int j = 0; j < 70; j++)
      for (int k = 0; k < 50; k++)
        for (int l = 0; l < 30; l++) {
          dp[i + 1][j][k][l] /= 6;
        }
  }
  cout << fixed << setprecision(16) << dp[N][a][b][c] << endl;
}
