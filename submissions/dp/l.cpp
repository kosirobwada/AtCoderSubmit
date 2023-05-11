#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
ll a[3300];
ll dp[3300][3300];
int main() {
  ll n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    dp[i][i] = 0;

  for (int width = 1; width <= n; width++) {
    for (int l = 0; l + width <= n; l++) {
      int r = l + width;
      if (width % 2 == n % 2) { // tarou
        dp[l][r] = max(dp[l + 1][r] + a[l], dp[l][r - 1] + a[r - 1]);
      } else { // jirou
        dp[l][r] = min(dp[l + 1][r] - a[l], dp[l][r - 1] - a[r - 1]);
      }
    }
  }

  cout << dp[0][n] << endl;

  return 0;
}
