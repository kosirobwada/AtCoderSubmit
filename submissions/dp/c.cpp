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
  vector<int> a(N), b(N), c(N);
  rep(i, 0, N) cin >> a[i] >> b[i] >> c[i];
  int dp[100100][3];
  dp[0][0] = a[0];
  dp[0][1] = b[0];
  dp[0][2] = c[0];
  for (int i = 1; i < N; i++) {
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
    dp[i][1] = max(dp[i - 1][2], dp[i - 1][0]) + b[i];
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
  }
  int m = dp[N - 1][0];
  m = max(m, dp[N - 1][1]);
  m = max(m, dp[N - 1][2]);
  cout << m << endl;
  return 0;
}
