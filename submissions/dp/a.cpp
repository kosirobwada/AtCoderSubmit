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
  vector<int> h(N);
  rep(i, 0, N) cin >> h[i];
  vector<int> dp(N + 9, 0);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < N; i++) {
    dp[i] =
        min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp[N - 1] << endl;
  return 0;
}
