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
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  vector<bool> dp(100010, false);
  for (int i = 0; i <= K; i++) {
    for (int j = 0; j < N; j++) {
      if (i - a[j] >= 0)
        dp[i] = dp[i] | !dp[i - a[j]];
    }
  }
  if (dp[K])
    cout << "First" << endl;
  else
    cout << "Second" << endl;
  return 0;
}
