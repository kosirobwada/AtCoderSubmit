#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;

long long a(long long x, long long y) {
  long long res = 1;
  for (int i = 0; i < y; i++) {
    res = res * x % mod;
  }
  return res;
}
int main() {
  long long n;
  cin >> n;
  long long ans = a(10, n) - a(9, n) - a(9, n) + a(8, n);
  ans %= mod;
  ans = (ans + mod) % mod;
  cout << ans << endl;
}
