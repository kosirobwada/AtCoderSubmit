#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> cost(M, 0), msk(M, 0);
  for (int i = 0; i < M; i++) {
    cin >> cost[i];
    int b;
    cin >> b;
    for (int j = 0; j < b; j++) {
      int x;
      cin >> x;
      x--;
      msk[i] |= (1 << x);
    }
  }
  vector<int> dp((1 << N), INF);
  dp[0] = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < (1 << N); j++) {
      int x = j | msk[i];
      dp[x] = min(dp[x], dp[j] + cost[i]);
    }
  }
  int ans = dp[(1 << N) - 1];
  if (ans == INF)
    ans = -1;
  cout << ans << endl;
  return 0;
}
