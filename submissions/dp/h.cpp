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
  ll H, W;
  cin >> H >> W;
  ll mod = 1e9 + 7;
  vector<vector<char>> S(H + 1, vector<char>(W + 1));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> S[i][j];
    }
  }
  vector<vector<ll>> dp(H + 9, vector<ll>(W + 9, 0));
  dp[1][1] = 1;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (S[i][j] == '#')
        continue;
      if (i > 1 && S[i - 1][j] == '.')
        dp[i][j] = (dp[i - 1][j] + dp[i][j]) % mod;
      if (j > 1 && S[i][j - 1] == '.')
        dp[i][j] = (dp[i][j - 1] + dp[i][j]) % mod;
    }
  }
  cout << dp[H][W] << endl;
  return 0;
}
