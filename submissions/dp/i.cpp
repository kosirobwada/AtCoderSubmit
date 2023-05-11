#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
  int N;
  cin >> N;
  vector<double> p(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> p[i];
  }
  vector<vector<double>> dp(N + 10, vector<double>(N + 10, 0.0));
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      if (i == 0 && j == 0)
        dp[i][j] = 1;
      else if (i == 0)
        dp[i][j] = 0;
      else if (j == 0)
        dp[i][j] = dp[i - 1][j] * (1 - p[i]);
      else
        dp[i][j] = dp[i - 1][j - 1] * p[i] + dp[i - 1][j] * (1 - p[i]);
    }
  }
  double ans = 0.0;
  for (int i = N / 2 + 1; i <= N; i++) {
    ans += dp[N][i];
  }
  printf("%.15lf", ans);
  return 0;
}
