#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
map<long long, long long> dp;
long long dfs(long long x) {
  if (dp.count(x))
    return dp[x];
  if (x >= 4)
    return dp[x] = dfs(x / 2) * dfs((x + 1) / 2) % mod;
  return dp[x] = x;
}
int main() {
  long long x;
  cin >> x;
  cout << dfs(x) << endl;
}
