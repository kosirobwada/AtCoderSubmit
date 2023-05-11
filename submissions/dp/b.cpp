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
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  rep(i, 0, N) cin >> h[i];
  vector<int> dp(N + 100, INF);
  dp[0] = 0;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= K; j++) {
      if (i - j >= 0) {
        dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
    }
  }
  cout << dp[N - 1] << endl;
  return 0;
}
