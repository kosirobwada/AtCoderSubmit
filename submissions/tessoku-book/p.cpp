#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1), b(N + 1);
  for (int i = 2; i <= N; i++) {
    cin >> a[i];
  }
  b[2] = INT_MAX;
  for (int i = 3; i <= N; i++) {
    cin >> b[i];
  }
  vector<int> dp(N + 1);
  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= N; i++) {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }
  cout << dp[N] << endl;
  return 0;
}
