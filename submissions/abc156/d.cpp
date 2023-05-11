#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int n, a, b, ans;
int qPow(int x, int y) {
  int res = 1;
  for (; y; y >>= 1, x = 1ll * x * x % MOD)
    if (y & 1)
      res = 1ll * res * x % MOD;
  return res;
}
int C(int x, int y) {
  int res = 1;
  for (int i = x - y + 1; i <= x; ++i)
    res = 1ll * res * i % MOD;
  for (int i = 1; i <= y; ++i)
    res = 1ll * res * qPow(i, MOD - 2) % MOD;
  return res;
}
int main() {
  scanf("%d %d %d", &n, &a, &b);
  ans = qPow(2, n) - 1;
  ans = ((ans - C(n, a)) % MOD - C(n, b)) % MOD;
  printf("%d\n", (ans + MOD) % MOD);
  return 0;
}
