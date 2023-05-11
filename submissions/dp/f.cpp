#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
void LCS(string s, string t) {
  ll S = s.size();
  ll T = t.size();
  vector<vector<ll>> dp(S + 1, vector<ll>(T + 1, 0));
  bool flag = false;
  ll start_j = 0;
  string out;

  for (ll i = 0; i < S; i++) {
    for (ll j = 0; j < T; j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }

  string ans = "";
  int i = s.size(), j = t.size();
  while (i > 0 && j > 0) {
    if (dp[i][j] == dp[i - 1][j - 1] + 1 && s[i - 1] == t[j - 1]) {
      ans = s[i - 1] + ans;
      i--, j--;
    } else if (dp[i][j] == dp[i - 1][j]) {
      i--;
    } else if (dp[i][j] == dp[i][j - 1]) {
      j--;
    }
  }
  cout << ans << endl;
}

int main() {
  string S, T;
  cin >> S >> T;
  LCS(S, T);
  return 0;
}
