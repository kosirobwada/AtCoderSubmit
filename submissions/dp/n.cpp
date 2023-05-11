#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define MOD 1000000007
#define MOD2 998244353
#define INF ((1 << 30) - 1)
#define LINF (1LL << 60)
#define EPS (1e-10)
typedef long long Int;
typedef pair<Int, Int> P;

Int sum[440][440];
Int dp[440][440];
Int a[440];
Int n;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int l = 0; l < n; l++) {
    sum[l][l + 1] = a[l];
    for (int r = l + 2; r <= n; r++) {
      sum[l][r] = sum[l][r - 1] + a[r - 1];
    }
  }

  for (int width = 2; width <= n; width++) {
    for (int l = 0; l + width <= n; l++) {
      int r = l + width;
      dp[l][r] = LINF;
      for (int m = l + 1; m < r; m++) {
        dp[l][r] = min(dp[l][r], dp[l][m] + dp[m][r] + sum[l][r]);
      }
    }
  }
  cout << dp[0][n] << endl;
  return 0;
}
